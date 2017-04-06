/* ************************************************************************ *
 *    PROGRAM_NAME, VERSION                                                 *
 *    BRIEF_DESCRIPTION                                                     *
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
#include <stdio.h>

#define NUMCOL 6
#define NUMLIN 100

int main(void)
{
    int con[5], lin, i, t;
    for(t=0; t<=NUMLIN; t++)
        con[t] = -1;
    for(i=0; i <= NUMLIN; i++)
    {
        con[i] = srand()%6;
        for(t=0; t<=NUMLIN; t++)
        {
            if(con[t] == con[i])
                i--;
            else
                printf("%d\t", con[i]
        }
    }
    return EXIT_SUCCESS;
    }

