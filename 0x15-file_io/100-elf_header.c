#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

#define ELF_MAGIC 0x464C457F

typedef struct {
    uint8_t e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeader;

void print_elf_header(const ElfHeader* header) {
    int i;
    
    printf("Magic: ");
    for (i = 0; i < 16; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("Class: %s\n", header->e_ident[4] == 1 ? "ELF32" : "ELF64");
    printf("Data: %s\n", header->e_ident[5] == 1 ? "2's complement, little-endian" : "Invalid data encoding");
    printf("Version: %d\n", header->e_ident[6]);
    printf("OS/ABI: %d\n", header->e_ident[7]);
    printf("ABI Version: %d\n", header->e_ident[8]);
    printf("Type: 0x%x\n", header->e_type);
    printf("Entry point address: 0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    const char *filename;
    int fd;
    ElfHeader header;
    
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }

    if (read(fd, &header, sizeof(ElfHeader)) != sizeof(ElfHeader)) {
        fprintf(stderr, "Error reading ELF header\n");
        close(fd);
        return 98;
    }

    if (*(uint32_t*)header.e_ident != ELF_MAGIC) {
        fprintf(stderr, "Not a valid ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header(&header);
    close(fd);

    return 0;
}

