/*************************************************************************************[DagShrink.h]
Copyright (c) 2008, Niklas Sorensson

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT
OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**************************************************************************************************/

#ifndef Minisat_DagShrink_h
#define Minisat_DagShrink_h

#include "circ/Circ.h"
#include "circ/Aiger.h"

namespace Minisat {


Sig  dagShrink       (Circ& in, Circ& out, Gate g, GMap<Sig>& map, double& rnd_seed);

void dagShrink       (Circ& c, Box& b, Flops& flp, double& rnd_seed, bool only_copy = false);
void dagShrinkIter   (Circ& c, Box& b, Flops& flp, int    n_iters = 5);
void dagShrinkIter   (Circ& c, Box& b, Flops& flp, double frac);
void splitOutputs    (Circ& c, Box& b, Flops& flp);
void removeDeadLogic (Circ& c, Box& b, Flops& flp);

};

#endif
