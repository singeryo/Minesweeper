/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Grid.h
 * Author: Oliver
 *
 * Created on 20 septembre 2016, 21:23
 */

#ifndef GRID_H
#define GRID_H

#include "Cell.h"

class Grid
{
protected:
    Cell** cells;
    int rows;
    int columns;
    
public:
    Grid(int rows, int columns)
    {
        this->SetRows(rows);
        this->SetColumns(columns);
        
        cells = new Cell**
    }

    void SetColumns(int columns) {
        this->columns = columns;
    }

    int GetColumns() const {
        return columns;
    }

    void SetRows(int rows) {
        this->rows = rows;
    }

    int GetRows() const {
        return rows;
    }

    void SetCells(Cell** cells) {
        this->cells = cells;
    }

    Cell** GetCells() const {
        return cells;
    }
    

};


#endif /* GRID_H */

