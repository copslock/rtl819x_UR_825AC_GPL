/*
 *  ## Please DO NOT edit this file!! ##
 *  This file is auto-generated from the register source files.
 *  Any modifications to this file will be LOST when it is re-generated.
 *
 *  ----------------------------------------------------------------
 *  (C) Copyright 2009 Realtek Semiconductor Corp.
 *
 *  This program is the proprietary software of Realtek Semiconductor
 *  Corporation and/or its licensors, and only be used, duplicated,
 *  modified or distributed under the authorized license from Realtek.
 *
 *  ANY USE OF THE SOFTWARE OTHER THAN AS AUTHORIZED UNDER
 *  THIS LICENSE OR COPYRIGHT LAW IS PROHIBITED.
 *
 *  ----------------------------------------------------------------
 *  Purpose: chip register definition and structure of APOLLO
 *
 *  ----------------------------------------------------------------
 */

#include "apollo_reg_definition.h"
#include "apollo_reg_struct.h"
#include "apollo_table_struct.h"
#include "apollo_tableField_list.h"

rtk_table_t apollo_table_list[] =
{
#if defined(CONFIG_SDK_APOLLO)
    {   /* table name               HSB_DATA */
        /* access table type */     0,
        /* table size */            1,
        /* total data registers */  20,
        /* total field numbers */   65,
        /* table fields */          APOLLO_HSB_DATA_FIELDS
    },
    {   /* table name               HSA_DATA */
        /* access table type */     0,
        /* table size */            1,
        /* total data registers */  13,
        /* total field numbers */   48,
        /* table fields */          APOLLO_HSA_DATA_FIELDS
    },
    {   /* table name               HSA_DATA_NAT */
        /* access table type */     0,
        /* table size */            1,
        /* total data registers */  13,
        /* total field numbers */   59,
        /* table fields */          APOLLO_HSA_DATA_NAT_FIELDS
    },
    {   /* table name               ACL_ACTION */
        /* access table type */     3,
        /* table size */            128,
        /* total data registers */  2,
        /* total field numbers */   13,
        /* table fields */          APOLLO_ACL_ACTION_FIELDS
    },
    {   /* table name               ACL_DATA */
        /* access table type */     2,
        /* table size */            64,
        /* total data registers */  5,
        /* total field numbers */   12,
        /* table fields */          APOLLO_ACL_DATA_FIELDS
    },
    {   /* table name               ACL_DATA2 */
        /* access table type */     2,
        /* table size */            64,
        /* total data registers */  5,
        /* total field numbers */   14,
        /* table fields */          APOLLO_ACL_DATA2_FIELDS
    },
    {   /* table name               ACL_MASK */
        /* access table type */     2,
        /* table size */            64,
        /* total data registers */  5,
        /* total field numbers */   11,
        /* table fields */          APOLLO_ACL_MASK_FIELDS
    },
    {   /* table name               ACL_MASK2 */
        /* access table type */     2,
        /* table size */            64,
        /* total data registers */  5,
        /* total field numbers */   13,
        /* table fields */          APOLLO_ACL_MASK2_FIELDS
    },
    {   /* table name               CF_ACTION_DS */
        /* access table type */     5,
        /* table size */            512,
        /* total data registers */  2,
        /* total field numbers */   10,
        /* table fields */          APOLLO_CF_ACTION_DS_FIELDS
    },
    {   /* table name               CF_ACTION_US */
        /* access table type */     5,
        /* table size */            512,
        /* total data registers */  1,
        /* total field numbers */   8,
        /* table fields */          APOLLO_CF_ACTION_US_FIELDS
    },
    {   /* table name               CF_MASK */
        /* access table type */     4,
        /* table size */            128,
        /* total data registers */  5,
        /* total field numbers */   33,
        /* table fields */          APOLLO_CF_MASK_FIELDS
    },
    {   /* table name               CF_RULE */
        /* access table type */     4,
        /* table size */            128,
        /* total data registers */  5,
        /* total field numbers */   34,
        /* table fields */          APOLLO_CF_RULE_FIELDS
    },
    {   /* table name               L2_MC_DSL */
        /* access table type */     0,
        /* table size */            2112,
        /* total data registers */  4,
        /* total field numbers */   11,
        /* table fields */          APOLLO_L2_MC_DSL_FIELDS
    },
    {   /* table name               L2_UC */
        /* access table type */     0,
        /* table size */            2112,
        /* total data registers */  4,
        /* total field numbers */   18,
        /* table fields */          APOLLO_L2_UC_FIELDS
    },
    {   /* table name               L3_MC_DSL */
        /* access table type */     0,
        /* table size */            2112,
        /* total data registers */  4,
        /* total field numbers */   11,
        /* table fields */          APOLLO_L3_MC_DSL_FIELDS
    },
    {   /* table name               L3_MC_ROUTE */
        /* access table type */     0,
        /* table size */            2112,
        /* total data registers */  4,
        /* total field numbers */   13,
        /* table fields */          APOLLO_L3_MC_ROUTE_FIELDS
    },
    {   /* table name               VLAN */
        /* access table type */     1,
        /* table size */            4096,
        /* total data registers */  2,
        /* total field numbers */   10,
        /* table fields */          APOLLO_VLAN_FIELDS
    },
    {   /* table name               ARP_TABLE */
        /* access table type */     8,
        /* table size */            512,
        /* total data registers */  1,
        /* total field numbers */   2,
        /* table fields */          APOLLO_ARP_TABLE_FIELDS
    },
    {   /* table name               EXTERNAL_IP_TABLE */
        /* access table type */     4,
        /* table size */            16,
        /* total data registers */  3,
        /* total field numbers */   7,
        /* table fields */          APOLLO_EXTERNAL_IP_TABLE_FIELDS
    },
    {   /* table name               L3_ROUTING_DROP_TRAP */
        /* access table type */     0,
        /* table size */            8,
        /* total data registers */  2,
        /* total field numbers */   5,
        /* table fields */          APOLLO_L3_ROUTING_DROP_TRAP_FIELDS
    },
    {   /* table name               L3_ROUTING_GLOBAL_ROUTE */
        /* access table type */     0,
        /* table size */            8,
        /* total data registers */  2,
        /* total field numbers */   10,
        /* table fields */          APOLLO_L3_ROUTING_GLOBAL_ROUTE_FIELDS
    },
    {   /* table name               L3_ROUTING_LOCAL_ROUTE */
        /* access table type */     0,
        /* table size */            8,
        /* total data registers */  2,
        /* total field numbers */   8,
        /* table fields */          APOLLO_L3_ROUTING_LOCAL_ROUTE_FIELDS
    },
    {   /* table name               NAPT_TABLE */
        /* access table type */     10,
        /* table size */            2048,
        /* total data registers */  1,
        /* total field numbers */   4,
        /* table fields */          APOLLO_NAPT_TABLE_FIELDS
    },
    {   /* table name               NAPTR_TABLE */
        /* access table type */     9,
        /* table size */            1024,
        /* total data registers */  3,
        /* total field numbers */   9,
        /* table fields */          APOLLO_NAPTR_TABLE_FIELDS
    },
    {   /* table name               NETIF */
        /* access table type */     3,
        /* table size */            8,
        /* total data registers */  3,
        /* total field numbers */   6,
        /* table fields */          APOLLO_NETIF_FIELDS
    },
    {   /* table name               NEXT_HOP_TABLE */
        /* access table type */     2,
        /* table size */            16,
        /* total data registers */  1,
        /* total field numbers */   4,
        /* table fields */          APOLLO_NEXT_HOP_TABLE_FIELDS
    },
    {   /* table name               PPPOE_TABLE */
        /* access table type */     1,
        /* table size */            8,
        /* total data registers */  1,
        /* total field numbers */   1,
        /* table fields */          APOLLO_PPPOE_TABLE_FIELDS
    },
    {   /* table name               L34_HSA */
        /* access table type */     0,
        /* table size */            1,
        /* total data registers */  4,
        /* total field numbers */   17,
        /* table fields */          APOLLO_L34_HSA_FIELDS
    },
    {   /* table name               L34_HSB */
        /* access table type */     0,
        /* table size */            1,
        /* total data registers */  7,
        /* total field numbers */   23,
        /* table fields */          APOLLO_L34_HSB_FIELDS
    },
    {   /* table name               HSA_DEBUG_DATA */
        /* access table type */     0,
        /* table size */            1,
        /* total data registers */  16,
        /* total field numbers */   57,
        /* table fields */          APOLLO_HSA_DEBUG_DATA_FIELDS
    },
#endif
};

