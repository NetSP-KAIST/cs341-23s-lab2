// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/sys_stats_counters.proto

#include "protos/perfetto/common/sys_stats_counters.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace perfetto {
namespace protos {
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {
bool MeminfoCounters_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> MeminfoCounters_strings[34] = {};

static const char MeminfoCounters_names[] =
  "MEMINFO_ACTIVE"
  "MEMINFO_ACTIVE_ANON"
  "MEMINFO_ACTIVE_FILE"
  "MEMINFO_ANON_PAGES"
  "MEMINFO_BUFFERS"
  "MEMINFO_CACHED"
  "MEMINFO_CMA_FREE"
  "MEMINFO_CMA_TOTAL"
  "MEMINFO_COMMITED_AS"
  "MEMINFO_COMMIT_LIMIT"
  "MEMINFO_DIRTY"
  "MEMINFO_INACTIVE"
  "MEMINFO_INACTIVE_ANON"
  "MEMINFO_INACTIVE_FILE"
  "MEMINFO_KERNEL_STACK"
  "MEMINFO_MAPPED"
  "MEMINFO_MEM_AVAILABLE"
  "MEMINFO_MEM_FREE"
  "MEMINFO_MEM_TOTAL"
  "MEMINFO_MLOCKED"
  "MEMINFO_PAGE_TABLES"
  "MEMINFO_SHMEM"
  "MEMINFO_SLAB"
  "MEMINFO_SLAB_RECLAIMABLE"
  "MEMINFO_SLAB_UNRECLAIMABLE"
  "MEMINFO_SWAP_CACHED"
  "MEMINFO_SWAP_FREE"
  "MEMINFO_SWAP_TOTAL"
  "MEMINFO_UNEVICTABLE"
  "MEMINFO_UNSPECIFIED"
  "MEMINFO_VMALLOC_CHUNK"
  "MEMINFO_VMALLOC_TOTAL"
  "MEMINFO_VMALLOC_USED"
  "MEMINFO_WRITEBACK";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry MeminfoCounters_entries[] = {
  { {MeminfoCounters_names + 0, 14}, 7 },
  { {MeminfoCounters_names + 14, 19}, 9 },
  { {MeminfoCounters_names + 33, 19}, 11 },
  { {MeminfoCounters_names + 52, 18}, 19 },
  { {MeminfoCounters_names + 70, 15}, 4 },
  { {MeminfoCounters_names + 85, 14}, 5 },
  { {MeminfoCounters_names + 99, 16}, 33 },
  { {MeminfoCounters_names + 115, 17}, 32 },
  { {MeminfoCounters_names + 132, 19}, 28 },
  { {MeminfoCounters_names + 151, 20}, 27 },
  { {MeminfoCounters_names + 171, 13}, 17 },
  { {MeminfoCounters_names + 184, 16}, 8 },
  { {MeminfoCounters_names + 200, 21}, 10 },
  { {MeminfoCounters_names + 221, 21}, 12 },
  { {MeminfoCounters_names + 242, 20}, 25 },
  { {MeminfoCounters_names + 262, 14}, 20 },
  { {MeminfoCounters_names + 276, 21}, 3 },
  { {MeminfoCounters_names + 297, 16}, 2 },
  { {MeminfoCounters_names + 313, 17}, 1 },
  { {MeminfoCounters_names + 330, 15}, 14 },
  { {MeminfoCounters_names + 345, 19}, 26 },
  { {MeminfoCounters_names + 364, 13}, 21 },
  { {MeminfoCounters_names + 377, 12}, 22 },
  { {MeminfoCounters_names + 389, 24}, 23 },
  { {MeminfoCounters_names + 413, 26}, 24 },
  { {MeminfoCounters_names + 439, 19}, 6 },
  { {MeminfoCounters_names + 458, 17}, 16 },
  { {MeminfoCounters_names + 475, 18}, 15 },
  { {MeminfoCounters_names + 493, 19}, 13 },
  { {MeminfoCounters_names + 512, 19}, 0 },
  { {MeminfoCounters_names + 531, 21}, 31 },
  { {MeminfoCounters_names + 552, 21}, 29 },
  { {MeminfoCounters_names + 573, 20}, 30 },
  { {MeminfoCounters_names + 593, 17}, 18 },
};

static const int MeminfoCounters_entries_by_number[] = {
  29, // 0 -> MEMINFO_UNSPECIFIED
  18, // 1 -> MEMINFO_MEM_TOTAL
  17, // 2 -> MEMINFO_MEM_FREE
  16, // 3 -> MEMINFO_MEM_AVAILABLE
  4, // 4 -> MEMINFO_BUFFERS
  5, // 5 -> MEMINFO_CACHED
  25, // 6 -> MEMINFO_SWAP_CACHED
  0, // 7 -> MEMINFO_ACTIVE
  11, // 8 -> MEMINFO_INACTIVE
  1, // 9 -> MEMINFO_ACTIVE_ANON
  12, // 10 -> MEMINFO_INACTIVE_ANON
  2, // 11 -> MEMINFO_ACTIVE_FILE
  13, // 12 -> MEMINFO_INACTIVE_FILE
  28, // 13 -> MEMINFO_UNEVICTABLE
  19, // 14 -> MEMINFO_MLOCKED
  27, // 15 -> MEMINFO_SWAP_TOTAL
  26, // 16 -> MEMINFO_SWAP_FREE
  10, // 17 -> MEMINFO_DIRTY
  33, // 18 -> MEMINFO_WRITEBACK
  3, // 19 -> MEMINFO_ANON_PAGES
  15, // 20 -> MEMINFO_MAPPED
  21, // 21 -> MEMINFO_SHMEM
  22, // 22 -> MEMINFO_SLAB
  23, // 23 -> MEMINFO_SLAB_RECLAIMABLE
  24, // 24 -> MEMINFO_SLAB_UNRECLAIMABLE
  14, // 25 -> MEMINFO_KERNEL_STACK
  20, // 26 -> MEMINFO_PAGE_TABLES
  9, // 27 -> MEMINFO_COMMIT_LIMIT
  8, // 28 -> MEMINFO_COMMITED_AS
  31, // 29 -> MEMINFO_VMALLOC_TOTAL
  32, // 30 -> MEMINFO_VMALLOC_USED
  30, // 31 -> MEMINFO_VMALLOC_CHUNK
  7, // 32 -> MEMINFO_CMA_TOTAL
  6, // 33 -> MEMINFO_CMA_FREE
};

const std::string& MeminfoCounters_Name(
    MeminfoCounters value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          MeminfoCounters_entries,
          MeminfoCounters_entries_by_number,
          34, MeminfoCounters_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      MeminfoCounters_entries,
      MeminfoCounters_entries_by_number,
      34, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     MeminfoCounters_strings[idx].get();
}
bool MeminfoCounters_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, MeminfoCounters* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      MeminfoCounters_entries, 34, name, &int_value);
  if (success) {
    *value = static_cast<MeminfoCounters>(int_value);
  }
  return success;
}
bool VmstatCounters_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> VmstatCounters_strings[129] = {};

static const char VmstatCounters_names[] =
  "VMSTAT_ALLOCSTALL"
  "VMSTAT_ALLOCSTALL_DMA"
  "VMSTAT_ALLOCSTALL_MOVABLE"
  "VMSTAT_ALLOCSTALL_NORMAL"
  "VMSTAT_COMPACT_DAEMON_FREE_SCANNED"
  "VMSTAT_COMPACT_DAEMON_MIGRATE_SCANNED"
  "VMSTAT_COMPACT_DAEMON_WAKE"
  "VMSTAT_COMPACT_FAIL"
  "VMSTAT_COMPACT_FREE_SCANNED"
  "VMSTAT_COMPACT_ISOLATED"
  "VMSTAT_COMPACT_MIGRATE_SCANNED"
  "VMSTAT_COMPACT_STALL"
  "VMSTAT_COMPACT_SUCCESS"
  "VMSTAT_DROP_PAGECACHE"
  "VMSTAT_DROP_SLAB"
  "VMSTAT_KSWAPD_HIGH_WMARK_HIT_QUICKLY"
  "VMSTAT_KSWAPD_INODESTEAL"
  "VMSTAT_KSWAPD_LOW_WMARK_HIT_QUICKLY"
  "VMSTAT_NR_ACTIVE_ANON"
  "VMSTAT_NR_ACTIVE_FILE"
  "VMSTAT_NR_ALLOC_BATCH"
  "VMSTAT_NR_ANON_PAGES"
  "VMSTAT_NR_ANON_TRANSPARENT_HUGEPAGES"
  "VMSTAT_NR_BOUNCE"
  "VMSTAT_NR_DIRTIED"
  "VMSTAT_NR_DIRTY"
  "VMSTAT_NR_DIRTY_BACKGROUND_THRESHOLD"
  "VMSTAT_NR_DIRTY_THRESHOLD"
  "VMSTAT_NR_FASTRPC"
  "VMSTAT_NR_FILE_PAGES"
  "VMSTAT_NR_FREE_CMA"
  "VMSTAT_NR_FREE_PAGES"
  "VMSTAT_NR_GPU_HEAP"
  "VMSTAT_NR_INACTIVE_ANON"
  "VMSTAT_NR_INACTIVE_FILE"
  "VMSTAT_NR_INDIRECTLY_RECLAIMABLE"
  "VMSTAT_NR_ION_HEAP"
  "VMSTAT_NR_ION_HEAP_POOL"
  "VMSTAT_NR_ISOLATED_ANON"
  "VMSTAT_NR_ISOLATED_FILE"
  "VMSTAT_NR_KERNEL_MISC_RECLAIMABLE"
  "VMSTAT_NR_KERNEL_STACK"
  "VMSTAT_NR_MAPPED"
  "VMSTAT_NR_MLOCK"
  "VMSTAT_NR_OVERHEAD"
  "VMSTAT_NR_PAGES_SCANNED"
  "VMSTAT_NR_PAGE_TABLE_PAGES"
  "VMSTAT_NR_SHADOW_CALL_STACK_BYTES"
  "VMSTAT_NR_SHMEM"
  "VMSTAT_NR_SHMEM_HUGEPAGES"
  "VMSTAT_NR_SHMEM_PMDMAPPED"
  "VMSTAT_NR_SLAB_RECLAIMABLE"
  "VMSTAT_NR_SLAB_UNRECLAIMABLE"
  "VMSTAT_NR_SWAPCACHE"
  "VMSTAT_NR_UNEVICTABLE"
  "VMSTAT_NR_UNRECLAIMABLE_PAGES"
  "VMSTAT_NR_UNSTABLE"
  "VMSTAT_NR_VMSCAN_IMMEDIATE_RECLAIM"
  "VMSTAT_NR_VMSCAN_WRITE"
  "VMSTAT_NR_WRITEBACK"
  "VMSTAT_NR_WRITEBACK_TEMP"
  "VMSTAT_NR_WRITTEN"
  "VMSTAT_NR_ZONE_ACTIVE_ANON"
  "VMSTAT_NR_ZONE_ACTIVE_FILE"
  "VMSTAT_NR_ZONE_INACTIVE_ANON"
  "VMSTAT_NR_ZONE_INACTIVE_FILE"
  "VMSTAT_NR_ZONE_UNEVICTABLE"
  "VMSTAT_NR_ZONE_WRITE_PENDING"
  "VMSTAT_NR_ZSPAGES"
  "VMSTAT_OOM_KILL"
  "VMSTAT_PAGEOUTRUN"
  "VMSTAT_PGACTIVATE"
  "VMSTAT_PGALLOC_DMA"
  "VMSTAT_PGALLOC_MOVABLE"
  "VMSTAT_PGALLOC_NORMAL"
  "VMSTAT_PGDEACTIVATE"
  "VMSTAT_PGFAULT"
  "VMSTAT_PGFREE"
  "VMSTAT_PGINODESTEAL"
  "VMSTAT_PGLAZYFREE"
  "VMSTAT_PGLAZYFREED"
  "VMSTAT_PGMAJFAULT"
  "VMSTAT_PGMIGRATE_FAIL"
  "VMSTAT_PGMIGRATE_SUCCESS"
  "VMSTAT_PGPGIN"
  "VMSTAT_PGPGOUT"
  "VMSTAT_PGPGOUTCLEAN"
  "VMSTAT_PGREFILL"
  "VMSTAT_PGREFILL_DMA"
  "VMSTAT_PGREFILL_MOVABLE"
  "VMSTAT_PGREFILL_NORMAL"
  "VMSTAT_PGROTATED"
  "VMSTAT_PGSCAN_DIRECT"
  "VMSTAT_PGSCAN_DIRECT_DMA"
  "VMSTAT_PGSCAN_DIRECT_MOVABLE"
  "VMSTAT_PGSCAN_DIRECT_NORMAL"
  "VMSTAT_PGSCAN_DIRECT_THROTTLE"
  "VMSTAT_PGSCAN_KSWAPD"
  "VMSTAT_PGSCAN_KSWAPD_DMA"
  "VMSTAT_PGSCAN_KSWAPD_MOVABLE"
  "VMSTAT_PGSCAN_KSWAPD_NORMAL"
  "VMSTAT_PGSKIP_DMA"
  "VMSTAT_PGSKIP_MOVABLE"
  "VMSTAT_PGSKIP_NORMAL"
  "VMSTAT_PGSTEAL_DIRECT"
  "VMSTAT_PGSTEAL_DIRECT_DMA"
  "VMSTAT_PGSTEAL_DIRECT_MOVABLE"
  "VMSTAT_PGSTEAL_DIRECT_NORMAL"
  "VMSTAT_PGSTEAL_KSWAPD"
  "VMSTAT_PGSTEAL_KSWAPD_DMA"
  "VMSTAT_PGSTEAL_KSWAPD_MOVABLE"
  "VMSTAT_PGSTEAL_KSWAPD_NORMAL"
  "VMSTAT_PSWPIN"
  "VMSTAT_PSWPOUT"
  "VMSTAT_SLABS_SCANNED"
  "VMSTAT_SWAP_RA"
  "VMSTAT_SWAP_RA_HIT"
  "VMSTAT_UNEVICTABLE_PGS_CLEARED"
  "VMSTAT_UNEVICTABLE_PGS_CULLED"
  "VMSTAT_UNEVICTABLE_PGS_MLOCKED"
  "VMSTAT_UNEVICTABLE_PGS_MUNLOCKED"
  "VMSTAT_UNEVICTABLE_PGS_RESCUED"
  "VMSTAT_UNEVICTABLE_PGS_SCANNED"
  "VMSTAT_UNEVICTABLE_PGS_STRANDED"
  "VMSTAT_UNSPECIFIED"
  "VMSTAT_WORKINGSET_ACTIVATE"
  "VMSTAT_WORKINGSET_NODERECLAIM"
  "VMSTAT_WORKINGSET_REFAULT"
  "VMSTAT_WORKINGSET_RESTORE";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry VmstatCounters_entries[] = {
  { {VmstatCounters_names + 0, 17}, 73 },
  { {VmstatCounters_names + 17, 21}, 96 },
  { {VmstatCounters_names + 38, 25}, 97 },
  { {VmstatCounters_names + 63, 24}, 98 },
  { {VmstatCounters_names + 87, 34}, 99 },
  { {VmstatCounters_names + 121, 37}, 100 },
  { {VmstatCounters_names + 158, 26}, 85 },
  { {VmstatCounters_names + 184, 19}, 83 },
  { {VmstatCounters_names + 203, 27}, 80 },
  { {VmstatCounters_names + 230, 23}, 81 },
  { {VmstatCounters_names + 253, 30}, 79 },
  { {VmstatCounters_names + 283, 20}, 82 },
  { {VmstatCounters_names + 303, 22}, 84 },
  { {VmstatCounters_names + 325, 21}, 75 },
  { {VmstatCounters_names + 346, 16}, 76 },
  { {VmstatCounters_names + 362, 36}, 71 },
  { {VmstatCounters_names + 398, 24}, 69 },
  { {VmstatCounters_names + 422, 35}, 70 },
  { {VmstatCounters_names + 457, 21}, 4 },
  { {VmstatCounters_names + 478, 21}, 6 },
  { {VmstatCounters_names + 499, 21}, 2 },
  { {VmstatCounters_names + 520, 20}, 9 },
  { {VmstatCounters_names + 540, 36}, 33 },
  { {VmstatCounters_names + 576, 16}, 20 },
  { {VmstatCounters_names + 592, 17}, 27 },
  { {VmstatCounters_names + 609, 15}, 12 },
  { {VmstatCounters_names + 624, 36}, 37 },
  { {VmstatCounters_names + 660, 25}, 36 },
  { {VmstatCounters_names + 685, 17}, 101 },
  { {VmstatCounters_names + 702, 20}, 11 },
  { {VmstatCounters_names + 722, 18}, 34 },
  { {VmstatCounters_names + 740, 20}, 1 },
  { {VmstatCounters_names + 760, 18}, 95 },
  { {VmstatCounters_names + 778, 23}, 3 },
  { {VmstatCounters_names + 801, 23}, 5 },
  { {VmstatCounters_names + 824, 32}, 102 },
  { {VmstatCounters_names + 856, 18}, 94 },
  { {VmstatCounters_names + 874, 23}, 103 },
  { {VmstatCounters_names + 897, 23}, 24 },
  { {VmstatCounters_names + 920, 23}, 25 },
  { {VmstatCounters_names + 943, 33}, 104 },
  { {VmstatCounters_names + 976, 22}, 17 },
  { {VmstatCounters_names + 998, 16}, 10 },
  { {VmstatCounters_names + 1014, 15}, 8 },
  { {VmstatCounters_names + 1029, 18}, 18 },
  { {VmstatCounters_names + 1047, 23}, 29 },
  { {VmstatCounters_names + 1070, 26}, 16 },
  { {VmstatCounters_names + 1096, 33}, 105 },
  { {VmstatCounters_names + 1129, 15}, 26 },
  { {VmstatCounters_names + 1144, 25}, 106 },
  { {VmstatCounters_names + 1169, 25}, 107 },
  { {VmstatCounters_names + 1194, 26}, 14 },
  { {VmstatCounters_names + 1220, 28}, 15 },
  { {VmstatCounters_names + 1248, 19}, 35 },
  { {VmstatCounters_names + 1267, 21}, 7 },
  { {VmstatCounters_names + 1288, 29}, 108 },
  { {VmstatCounters_names + 1317, 18}, 19 },
  { {VmstatCounters_names + 1335, 34}, 22 },
  { {VmstatCounters_names + 1369, 22}, 21 },
  { {VmstatCounters_names + 1391, 19}, 13 },
  { {VmstatCounters_names + 1410, 24}, 23 },
  { {VmstatCounters_names + 1434, 17}, 28 },
  { {VmstatCounters_names + 1451, 26}, 109 },
  { {VmstatCounters_names + 1477, 26}, 110 },
  { {VmstatCounters_names + 1503, 28}, 111 },
  { {VmstatCounters_names + 1531, 28}, 112 },
  { {VmstatCounters_names + 1559, 26}, 113 },
  { {VmstatCounters_names + 1585, 28}, 114 },
  { {VmstatCounters_names + 1613, 17}, 93 },
  { {VmstatCounters_names + 1630, 15}, 115 },
  { {VmstatCounters_names + 1645, 17}, 72 },
  { {VmstatCounters_names + 1662, 17}, 47 },
  { {VmstatCounters_names + 1679, 18}, 43 },
  { {VmstatCounters_names + 1697, 22}, 45 },
  { {VmstatCounters_names + 1719, 21}, 44 },
  { {VmstatCounters_names + 1740, 19}, 48 },
  { {VmstatCounters_names + 1759, 14}, 49 },
  { {VmstatCounters_names + 1773, 13}, 46 },
  { {VmstatCounters_names + 1786, 19}, 67 },
  { {VmstatCounters_names + 1805, 17}, 116 },
  { {VmstatCounters_names + 1822, 18}, 117 },
  { {VmstatCounters_names + 1840, 17}, 50 },
  { {VmstatCounters_names + 1857, 21}, 78 },
  { {VmstatCounters_names + 1878, 24}, 77 },
  { {VmstatCounters_names + 1902, 13}, 38 },
  { {VmstatCounters_names + 1915, 14}, 39 },
  { {VmstatCounters_names + 1929, 19}, 40 },
  { {VmstatCounters_names + 1948, 15}, 118 },
  { {VmstatCounters_names + 1963, 19}, 51 },
  { {VmstatCounters_names + 1982, 23}, 53 },
  { {VmstatCounters_names + 2005, 22}, 52 },
  { {VmstatCounters_names + 2027, 16}, 74 },
  { {VmstatCounters_names + 2043, 20}, 119 },
  { {VmstatCounters_names + 2063, 24}, 63 },
  { {VmstatCounters_names + 2087, 28}, 65 },
  { {VmstatCounters_names + 2115, 27}, 64 },
  { {VmstatCounters_names + 2142, 29}, 66 },
  { {VmstatCounters_names + 2171, 20}, 120 },
  { {VmstatCounters_names + 2191, 24}, 60 },
  { {VmstatCounters_names + 2215, 28}, 62 },
  { {VmstatCounters_names + 2243, 27}, 61 },
  { {VmstatCounters_names + 2270, 17}, 121 },
  { {VmstatCounters_names + 2287, 21}, 122 },
  { {VmstatCounters_names + 2308, 20}, 123 },
  { {VmstatCounters_names + 2328, 21}, 124 },
  { {VmstatCounters_names + 2349, 25}, 57 },
  { {VmstatCounters_names + 2374, 29}, 59 },
  { {VmstatCounters_names + 2403, 28}, 58 },
  { {VmstatCounters_names + 2431, 21}, 125 },
  { {VmstatCounters_names + 2452, 25}, 54 },
  { {VmstatCounters_names + 2477, 29}, 56 },
  { {VmstatCounters_names + 2506, 28}, 55 },
  { {VmstatCounters_names + 2534, 13}, 41 },
  { {VmstatCounters_names + 2547, 14}, 42 },
  { {VmstatCounters_names + 2561, 20}, 68 },
  { {VmstatCounters_names + 2581, 14}, 126 },
  { {VmstatCounters_names + 2595, 18}, 127 },
  { {VmstatCounters_names + 2613, 30}, 91 },
  { {VmstatCounters_names + 2643, 29}, 86 },
  { {VmstatCounters_names + 2672, 30}, 89 },
  { {VmstatCounters_names + 2702, 32}, 90 },
  { {VmstatCounters_names + 2734, 30}, 88 },
  { {VmstatCounters_names + 2764, 30}, 87 },
  { {VmstatCounters_names + 2794, 31}, 92 },
  { {VmstatCounters_names + 2825, 18}, 0 },
  { {VmstatCounters_names + 2843, 26}, 31 },
  { {VmstatCounters_names + 2869, 29}, 32 },
  { {VmstatCounters_names + 2898, 25}, 30 },
  { {VmstatCounters_names + 2923, 25}, 128 },
};

static const int VmstatCounters_entries_by_number[] = {
  124, // 0 -> VMSTAT_UNSPECIFIED
  31, // 1 -> VMSTAT_NR_FREE_PAGES
  20, // 2 -> VMSTAT_NR_ALLOC_BATCH
  33, // 3 -> VMSTAT_NR_INACTIVE_ANON
  18, // 4 -> VMSTAT_NR_ACTIVE_ANON
  34, // 5 -> VMSTAT_NR_INACTIVE_FILE
  19, // 6 -> VMSTAT_NR_ACTIVE_FILE
  54, // 7 -> VMSTAT_NR_UNEVICTABLE
  43, // 8 -> VMSTAT_NR_MLOCK
  21, // 9 -> VMSTAT_NR_ANON_PAGES
  42, // 10 -> VMSTAT_NR_MAPPED
  29, // 11 -> VMSTAT_NR_FILE_PAGES
  25, // 12 -> VMSTAT_NR_DIRTY
  59, // 13 -> VMSTAT_NR_WRITEBACK
  51, // 14 -> VMSTAT_NR_SLAB_RECLAIMABLE
  52, // 15 -> VMSTAT_NR_SLAB_UNRECLAIMABLE
  46, // 16 -> VMSTAT_NR_PAGE_TABLE_PAGES
  41, // 17 -> VMSTAT_NR_KERNEL_STACK
  44, // 18 -> VMSTAT_NR_OVERHEAD
  56, // 19 -> VMSTAT_NR_UNSTABLE
  23, // 20 -> VMSTAT_NR_BOUNCE
  58, // 21 -> VMSTAT_NR_VMSCAN_WRITE
  57, // 22 -> VMSTAT_NR_VMSCAN_IMMEDIATE_RECLAIM
  60, // 23 -> VMSTAT_NR_WRITEBACK_TEMP
  38, // 24 -> VMSTAT_NR_ISOLATED_ANON
  39, // 25 -> VMSTAT_NR_ISOLATED_FILE
  48, // 26 -> VMSTAT_NR_SHMEM
  24, // 27 -> VMSTAT_NR_DIRTIED
  61, // 28 -> VMSTAT_NR_WRITTEN
  45, // 29 -> VMSTAT_NR_PAGES_SCANNED
  127, // 30 -> VMSTAT_WORKINGSET_REFAULT
  125, // 31 -> VMSTAT_WORKINGSET_ACTIVATE
  126, // 32 -> VMSTAT_WORKINGSET_NODERECLAIM
  22, // 33 -> VMSTAT_NR_ANON_TRANSPARENT_HUGEPAGES
  30, // 34 -> VMSTAT_NR_FREE_CMA
  53, // 35 -> VMSTAT_NR_SWAPCACHE
  27, // 36 -> VMSTAT_NR_DIRTY_THRESHOLD
  26, // 37 -> VMSTAT_NR_DIRTY_BACKGROUND_THRESHOLD
  84, // 38 -> VMSTAT_PGPGIN
  85, // 39 -> VMSTAT_PGPGOUT
  86, // 40 -> VMSTAT_PGPGOUTCLEAN
  112, // 41 -> VMSTAT_PSWPIN
  113, // 42 -> VMSTAT_PSWPOUT
  72, // 43 -> VMSTAT_PGALLOC_DMA
  74, // 44 -> VMSTAT_PGALLOC_NORMAL
  73, // 45 -> VMSTAT_PGALLOC_MOVABLE
  77, // 46 -> VMSTAT_PGFREE
  71, // 47 -> VMSTAT_PGACTIVATE
  75, // 48 -> VMSTAT_PGDEACTIVATE
  76, // 49 -> VMSTAT_PGFAULT
  81, // 50 -> VMSTAT_PGMAJFAULT
  88, // 51 -> VMSTAT_PGREFILL_DMA
  90, // 52 -> VMSTAT_PGREFILL_NORMAL
  89, // 53 -> VMSTAT_PGREFILL_MOVABLE
  109, // 54 -> VMSTAT_PGSTEAL_KSWAPD_DMA
  111, // 55 -> VMSTAT_PGSTEAL_KSWAPD_NORMAL
  110, // 56 -> VMSTAT_PGSTEAL_KSWAPD_MOVABLE
  105, // 57 -> VMSTAT_PGSTEAL_DIRECT_DMA
  107, // 58 -> VMSTAT_PGSTEAL_DIRECT_NORMAL
  106, // 59 -> VMSTAT_PGSTEAL_DIRECT_MOVABLE
  98, // 60 -> VMSTAT_PGSCAN_KSWAPD_DMA
  100, // 61 -> VMSTAT_PGSCAN_KSWAPD_NORMAL
  99, // 62 -> VMSTAT_PGSCAN_KSWAPD_MOVABLE
  93, // 63 -> VMSTAT_PGSCAN_DIRECT_DMA
  95, // 64 -> VMSTAT_PGSCAN_DIRECT_NORMAL
  94, // 65 -> VMSTAT_PGSCAN_DIRECT_MOVABLE
  96, // 66 -> VMSTAT_PGSCAN_DIRECT_THROTTLE
  78, // 67 -> VMSTAT_PGINODESTEAL
  114, // 68 -> VMSTAT_SLABS_SCANNED
  16, // 69 -> VMSTAT_KSWAPD_INODESTEAL
  17, // 70 -> VMSTAT_KSWAPD_LOW_WMARK_HIT_QUICKLY
  15, // 71 -> VMSTAT_KSWAPD_HIGH_WMARK_HIT_QUICKLY
  70, // 72 -> VMSTAT_PAGEOUTRUN
  0, // 73 -> VMSTAT_ALLOCSTALL
  91, // 74 -> VMSTAT_PGROTATED
  13, // 75 -> VMSTAT_DROP_PAGECACHE
  14, // 76 -> VMSTAT_DROP_SLAB
  83, // 77 -> VMSTAT_PGMIGRATE_SUCCESS
  82, // 78 -> VMSTAT_PGMIGRATE_FAIL
  10, // 79 -> VMSTAT_COMPACT_MIGRATE_SCANNED
  8, // 80 -> VMSTAT_COMPACT_FREE_SCANNED
  9, // 81 -> VMSTAT_COMPACT_ISOLATED
  11, // 82 -> VMSTAT_COMPACT_STALL
  7, // 83 -> VMSTAT_COMPACT_FAIL
  12, // 84 -> VMSTAT_COMPACT_SUCCESS
  6, // 85 -> VMSTAT_COMPACT_DAEMON_WAKE
  118, // 86 -> VMSTAT_UNEVICTABLE_PGS_CULLED
  122, // 87 -> VMSTAT_UNEVICTABLE_PGS_SCANNED
  121, // 88 -> VMSTAT_UNEVICTABLE_PGS_RESCUED
  119, // 89 -> VMSTAT_UNEVICTABLE_PGS_MLOCKED
  120, // 90 -> VMSTAT_UNEVICTABLE_PGS_MUNLOCKED
  117, // 91 -> VMSTAT_UNEVICTABLE_PGS_CLEARED
  123, // 92 -> VMSTAT_UNEVICTABLE_PGS_STRANDED
  68, // 93 -> VMSTAT_NR_ZSPAGES
  36, // 94 -> VMSTAT_NR_ION_HEAP
  32, // 95 -> VMSTAT_NR_GPU_HEAP
  1, // 96 -> VMSTAT_ALLOCSTALL_DMA
  2, // 97 -> VMSTAT_ALLOCSTALL_MOVABLE
  3, // 98 -> VMSTAT_ALLOCSTALL_NORMAL
  4, // 99 -> VMSTAT_COMPACT_DAEMON_FREE_SCANNED
  5, // 100 -> VMSTAT_COMPACT_DAEMON_MIGRATE_SCANNED
  28, // 101 -> VMSTAT_NR_FASTRPC
  35, // 102 -> VMSTAT_NR_INDIRECTLY_RECLAIMABLE
  37, // 103 -> VMSTAT_NR_ION_HEAP_POOL
  40, // 104 -> VMSTAT_NR_KERNEL_MISC_RECLAIMABLE
  47, // 105 -> VMSTAT_NR_SHADOW_CALL_STACK_BYTES
  49, // 106 -> VMSTAT_NR_SHMEM_HUGEPAGES
  50, // 107 -> VMSTAT_NR_SHMEM_PMDMAPPED
  55, // 108 -> VMSTAT_NR_UNRECLAIMABLE_PAGES
  62, // 109 -> VMSTAT_NR_ZONE_ACTIVE_ANON
  63, // 110 -> VMSTAT_NR_ZONE_ACTIVE_FILE
  64, // 111 -> VMSTAT_NR_ZONE_INACTIVE_ANON
  65, // 112 -> VMSTAT_NR_ZONE_INACTIVE_FILE
  66, // 113 -> VMSTAT_NR_ZONE_UNEVICTABLE
  67, // 114 -> VMSTAT_NR_ZONE_WRITE_PENDING
  69, // 115 -> VMSTAT_OOM_KILL
  79, // 116 -> VMSTAT_PGLAZYFREE
  80, // 117 -> VMSTAT_PGLAZYFREED
  87, // 118 -> VMSTAT_PGREFILL
  92, // 119 -> VMSTAT_PGSCAN_DIRECT
  97, // 120 -> VMSTAT_PGSCAN_KSWAPD
  101, // 121 -> VMSTAT_PGSKIP_DMA
  102, // 122 -> VMSTAT_PGSKIP_MOVABLE
  103, // 123 -> VMSTAT_PGSKIP_NORMAL
  104, // 124 -> VMSTAT_PGSTEAL_DIRECT
  108, // 125 -> VMSTAT_PGSTEAL_KSWAPD
  115, // 126 -> VMSTAT_SWAP_RA
  116, // 127 -> VMSTAT_SWAP_RA_HIT
  128, // 128 -> VMSTAT_WORKINGSET_RESTORE
};

const std::string& VmstatCounters_Name(
    VmstatCounters value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          VmstatCounters_entries,
          VmstatCounters_entries_by_number,
          129, VmstatCounters_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      VmstatCounters_entries,
      VmstatCounters_entries_by_number,
      129, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     VmstatCounters_strings[idx].get();
}
bool VmstatCounters_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, VmstatCounters* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      VmstatCounters_entries, 129, name, &int_value);
  if (success) {
    *value = static_cast<VmstatCounters>(int_value);
  }
  return success;
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>