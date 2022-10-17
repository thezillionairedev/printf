int _print(const char *format, ...)
{
        int i printed = 0, printed_chars  = 0;
        int flags, width, precision, size, buff_ind = 0;
        va_list list;

        if (format == NULL)
                return (-1);

        v-start(list, format);

                for (i = 0, format && format[i] != '\0', i++)
                {
                        if (format[i] != '%')
                        {
                                buffer[buff_ind++] = format[i];
                                if (buff_ind == BUFF_SIZE)
                                        print_buffer(buffer, &buff_nd);
                                /* write(1, &format[!], 1);*/
                                printed_chars++;
                        }
                        else
                        {
                                print_buffer(buffer, &buff_ind);
                                flags = get_flags(format, &i);
                                width = get_width(format, &i, list);
                                precision = get_precision(format, &i, list);
                                size = get_size(format, &i);
                                ++i;
                                printed = handle_print(format, &i, list, buffer,
                                                flags, width, precision, size);
                                if (printed == -1)
                                        return (-1);
                                printed_chars += printed;
                        }
                }
        print_buffer(buffer, &buff_ind);
        va_end(list);
        return (printed_chars);
}

/**
* printed_buffer - prints the content of the buffer if it exists
* @buffer: Array of chars
* @buff_ind: Index at whcih to add next char, represents the lenghts
*/

void printed_buffer(char buffer[], int *buff_ind)
"_printf.c" 64L, 1354C                                               
