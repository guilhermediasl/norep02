/* ************************************************************************ *
 *    Funcao que retorna 6 numeros aleatorios, sem repeticao.               *
 *                                                                          *
 *    Copyright (C) 2015 by Nome Completo                                   *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Nome Completo: Guilherme Dias de Andrade Lima                         *
 *    Email : guilherem.de.lima@gmail.com                                   *
 *    Phone: +55 (81) 99515-9441                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMCOL 6
#define NUMLIN 100

int *norep(void)
{
    int con[NUMCOL], i, t;
    for(t=0; t < NUMCOL; t++)
        con[t] = -1;
    for(i=0; i < NUMCOL; i++)
    {
        con[i] = rand()%6;
        for(t=0; t < i; t++)
        {
            if(con[t] == con[i])
                i--;
        }
    }
    return con;
}

int main(void)
{
    int i, j, *con;
    srand(time(NULL));
    for(j=0; j < NUMLIN; j++)
    {   
    con = norep();
        for(i=0; i < NUMCOL ;i++)
        {
            printf("%d\t", con[i]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
