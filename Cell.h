/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cell.h
 * Author: Oliver
 *
 * Created on 20 septembre 2016, 21:18
 */

#ifndef CELL_H
#define CELL_H

#include "Grid.h"

class Cell
{
    protected:
        Grid* parentGrid;
        Cell** surroundingCells;
        int isHidden;
        int surroundingMines;
        
    public :
        Cell(const Grid* grid)
        {
            this->SetParentGrid(grid);
        }

        void SetSurroundingMines(int surroundingMines) {
            this->surroundingMines = surroundingMines;
        }

        int GetSurroundingMines() const {
            return surroundingMines;
        }

        void SetHidden(int Hidden) {
            isHidden = Hidden;
        }

        int GetHidden() const {
            return isHidden;
        }

        /*
        void SetSurroundingCells(Cell** surroundingCells) {
            this->surroundingCells = surroundingCells;
        }
        */
        Cell** GetSurroundingCells() const {
            return surroundingCells;
        }

        void SetParentGrid(Grid* parentGrid) {
            this->parentGrid = parentGrid;
        }

        Grid* GetParentGrid() const {
            return parentGrid;
        }
        
        
        
    
    
};


#endif /* CELL_H */

