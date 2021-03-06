/*
  Copyright (C) 2011-2012 Olaf Lenz
  
  This file is part of ScaFaCoS.

  ScaFaCoS is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  ScaFaCoS is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser Public License for more details.

  You should have received a copy of the GNU Lesser Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>. 
*/



#ifndef _FCS_EWALD_H
#define _FCS_EWALD_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <mpi.h>
#include "fcs_ewald_p.h"
#include "FCSResult.h"
#include "FCSInterface.h"

FCSResult fcs_ewald_init(FCS handle, MPI_Comm communicator);

FCSResult fcs_ewald_tune(FCS handle,
			 fcs_int num_particles,
			 fcs_int local_max_particles,
			 fcs_float *positions, 
			 fcs_float *charges);
FCSResult fcs_ewald_run(FCS handle,
			fcs_int num_particles,
			fcs_int local_max_particles,
			fcs_float *positions, 
			fcs_float *charges,
			fcs_float *fields,
			fcs_float *potentials);
FCSResult fcs_ewald_destroy(FCS handle);

FCSResult fcs_ewald_print_parameters(FCS handle);

#endif
