#ifndef __PX_DBG_FT_CFG_H__
#define __PX_DBG_FT_CFG_H__
/* =============================================================================
     ____    ___    ____    ___    _   _    ___    __  __   ___  __  __ TM
    |  _ \  |_ _|  / ___|  / _ \  | \ | |  / _ \  |  \/  | |_ _| \ \/ /
    | |_) |  | |  | |     | | | | |  \| | | | | | | |\/| |  | |   \  /
    |  __/   | |  | |___  | |_| | | |\  | | |_| | | |  | |  | |   /  \
    |_|     |___|  \____|  \___/  |_| \_|  \___/  |_|  |_| |___| /_/\_\

    Copyright (c) 2021 Pieter Conradie <https://piconomix.com>

    License: MIT
    https://github.com/piconomix/piconomix-fwlib/blob/master/LICENSE.md

    Title:          px_dbg_ft.h : Debug Flow Trace module configuration
    Author(s):      Pieter Conradie
    Creation Date:  2021-05-31

============================================================================= */

/** 
 *  @addtogroup PX_DBG_FT
 */
/// @{

/* _____STANDARD INCLUDES____________________________________________________ */

/* _____PROJECT INCLUDES_____________________________________________________ */
#include "px_defines.h"

/* _____DEFINITIONS__________________________________________________________ */
// PX_DBG_FT symbol not defined in Makefile?
#ifndef PX_DBG_FT
/// Disable (0) or Enable (1) debug flow trace
#define PX_DBG_FT 0
#endif

/// Debug output string buffer size
#define PX_DBG_FT_CFG_BUF_SIZE 16

/// Customized name values
typedef enum
{
    PX_DBG_FT_NAME_NONE     = 0,
    PX_DBG_FT_NAME_MAIN     = 1,
} px_dbg_ft_name_t;

/// @}
#endif
