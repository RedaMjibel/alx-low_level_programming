#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_magic - prints ELF magic bytes
 * @h: the ELF header struct
 */
void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - prints ELF class
 * @h: the ELF header struct
 */
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
		break;
		case ELFCLASS32:
			printf("ELF32");
		break;
		case ELFCLASSNONE:
			printf("none");
		break;
	}
	printf("\n");
}

/** print_version - prints ELF version
 * @h: the ELF header stuct
 */

void print_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
		break;
		case EV_NONE:
			printf("%s", "");
		break;
		break;
	}
	printf("\n");
}

/**
 * print_osabi - prints ELF osabi
 * @h: the ELF header struct
 */

void print_osabi(Elf64_Ehdr h)
{
	printf(" OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solarix");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			break;
	}
	printf("\n");
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 1 on success 0 on failure
 */

int main(int argc, char **argv)
{
	int file;
	Elf64_Ehdr h;
	ssize_t b;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	b = read(file, &h, sizeof(h));
	if (b < 1 || b != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
			h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);
	print_magic(h);
	print_class(h);
	print_version(h);
	if (close(file))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", file), exit(98);
			return(EXIT_SUCCESS);
}
