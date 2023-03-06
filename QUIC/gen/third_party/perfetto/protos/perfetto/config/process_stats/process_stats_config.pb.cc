// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/process_stats/process_stats_config.proto

#include "protos/perfetto/config/process_stats/process_stats_config.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace perfetto {
namespace protos {
PROTOBUF_CONSTEXPR ProcessStatsConfig::ProcessStatsConfig(
    ::_pbi::ConstantInitialized)
  : quirks_()
  , proc_stats_poll_ms_(0u)
  , scan_all_processes_on_start_(false)
  , record_thread_names_(false)
  , resolve_process_fds_(false)
  , proc_stats_cache_ttl_ms_(0u){}
struct ProcessStatsConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProcessStatsConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProcessStatsConfigDefaultTypeInternal() {}
  union {
    ProcessStatsConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProcessStatsConfigDefaultTypeInternal _ProcessStatsConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {
bool ProcessStatsConfig_Quirks_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ProcessStatsConfig_Quirks_strings[3] = {};

static const char ProcessStatsConfig_Quirks_names[] =
  "DISABLE_INITIAL_DUMP"
  "DISABLE_ON_DEMAND"
  "QUIRKS_UNSPECIFIED";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ProcessStatsConfig_Quirks_entries[] = {
  { {ProcessStatsConfig_Quirks_names + 0, 20}, 1 },
  { {ProcessStatsConfig_Quirks_names + 20, 17}, 2 },
  { {ProcessStatsConfig_Quirks_names + 37, 18}, 0 },
};

static const int ProcessStatsConfig_Quirks_entries_by_number[] = {
  2, // 0 -> QUIRKS_UNSPECIFIED
  0, // 1 -> DISABLE_INITIAL_DUMP
  1, // 2 -> DISABLE_ON_DEMAND
};

const std::string& ProcessStatsConfig_Quirks_Name(
    ProcessStatsConfig_Quirks value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ProcessStatsConfig_Quirks_entries,
          ProcessStatsConfig_Quirks_entries_by_number,
          3, ProcessStatsConfig_Quirks_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ProcessStatsConfig_Quirks_entries,
      ProcessStatsConfig_Quirks_entries_by_number,
      3, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ProcessStatsConfig_Quirks_strings[idx].get();
}
bool ProcessStatsConfig_Quirks_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ProcessStatsConfig_Quirks* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ProcessStatsConfig_Quirks_entries, 3, name, &int_value);
  if (success) {
    *value = static_cast<ProcessStatsConfig_Quirks>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig::QUIRKS_UNSPECIFIED;
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig::DISABLE_INITIAL_DUMP;
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig::DISABLE_ON_DEMAND;
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig::Quirks_MIN;
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig::Quirks_MAX;
constexpr int ProcessStatsConfig::Quirks_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ProcessStatsConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<ProcessStatsConfig>()._has_bits_);
  static void set_has_scan_all_processes_on_start(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_record_thread_names(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_proc_stats_poll_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_proc_stats_cache_ttl_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_resolve_process_fds(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

ProcessStatsConfig::ProcessStatsConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  quirks_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ProcessStatsConfig)
}
ProcessStatsConfig::ProcessStatsConfig(const ProcessStatsConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      quirks_(from.quirks_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&proc_stats_poll_ms_, &from.proc_stats_poll_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&proc_stats_cache_ttl_ms_) -
    reinterpret_cast<char*>(&proc_stats_poll_ms_)) + sizeof(proc_stats_cache_ttl_ms_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ProcessStatsConfig)
}

inline void ProcessStatsConfig::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&proc_stats_poll_ms_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&proc_stats_cache_ttl_ms_) -
    reinterpret_cast<char*>(&proc_stats_poll_ms_)) + sizeof(proc_stats_cache_ttl_ms_));
}

ProcessStatsConfig::~ProcessStatsConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ProcessStatsConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProcessStatsConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ProcessStatsConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ProcessStatsConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ProcessStatsConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  quirks_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&proc_stats_poll_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&proc_stats_cache_ttl_ms_) -
        reinterpret_cast<char*>(&proc_stats_poll_ms_)) + sizeof(proc_stats_cache_ttl_ms_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ProcessStatsConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .perfetto.protos.ProcessStatsConfig.Quirks quirks = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          ptr -= 1;
          do {
            ptr += 1;
            uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
            CHK_(ptr);
            if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ProcessStatsConfig_Quirks_IsValid(val))) {
              _internal_add_quirks(static_cast<::perfetto::protos::ProcessStatsConfig_Quirks>(val));
            } else {
              ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
            }
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<8>(ptr));
        } else if (static_cast<uint8_t>(tag) == 10) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser<std::string>(_internal_mutable_quirks(), ptr, ctx, ::perfetto::protos::ProcessStatsConfig_Quirks_IsValid, &_internal_metadata_, 1);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool scan_all_processes_on_start = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_scan_all_processes_on_start(&has_bits);
          scan_all_processes_on_start_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool record_thread_names = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_record_thread_names(&has_bits);
          record_thread_names_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 proc_stats_poll_ms = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_proc_stats_poll_ms(&has_bits);
          proc_stats_poll_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 proc_stats_cache_ttl_ms = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_proc_stats_cache_ttl_ms(&has_bits);
          proc_stats_cache_ttl_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool resolve_process_fds = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_resolve_process_fds(&has_bits);
          resolve_process_fds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ProcessStatsConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ProcessStatsConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.ProcessStatsConfig.Quirks quirks = 1;
  for (int i = 0, n = this->_internal_quirks_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_quirks(i), target);
  }

  cached_has_bits = _has_bits_[0];
  // optional bool scan_all_processes_on_start = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_scan_all_processes_on_start(), target);
  }

  // optional bool record_thread_names = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_record_thread_names(), target);
  }

  // optional uint32 proc_stats_poll_ms = 4;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_proc_stats_poll_ms(), target);
  }

  // optional uint32 proc_stats_cache_ttl_ms = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(6, this->_internal_proc_stats_cache_ttl_ms(), target);
  }

  // optional bool resolve_process_fds = 9;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(9, this->_internal_resolve_process_fds(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ProcessStatsConfig)
  return target;
}

size_t ProcessStatsConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ProcessStatsConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.ProcessStatsConfig.Quirks quirks = 1;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_quirks_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_quirks(static_cast<int>(i)));
    }
    total_size += (1UL * count) + data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional uint32 proc_stats_poll_ms = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_proc_stats_poll_ms());
    }

    // optional bool scan_all_processes_on_start = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool record_thread_names = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional bool resolve_process_fds = 9;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional uint32 proc_stats_cache_ttl_ms = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_proc_stats_cache_ttl_ms());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProcessStatsConfig::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ProcessStatsConfig*>(
      &from));
}

void ProcessStatsConfig::MergeFrom(const ProcessStatsConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ProcessStatsConfig)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  quirks_.MergeFrom(from.quirks_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      proc_stats_poll_ms_ = from.proc_stats_poll_ms_;
    }
    if (cached_has_bits & 0x00000002u) {
      scan_all_processes_on_start_ = from.scan_all_processes_on_start_;
    }
    if (cached_has_bits & 0x00000004u) {
      record_thread_names_ = from.record_thread_names_;
    }
    if (cached_has_bits & 0x00000008u) {
      resolve_process_fds_ = from.resolve_process_fds_;
    }
    if (cached_has_bits & 0x00000010u) {
      proc_stats_cache_ttl_ms_ = from.proc_stats_cache_ttl_ms_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ProcessStatsConfig::CopyFrom(const ProcessStatsConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ProcessStatsConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessStatsConfig::IsInitialized() const {
  return true;
}

void ProcessStatsConfig::InternalSwap(ProcessStatsConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  quirks_.InternalSwap(&other->quirks_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ProcessStatsConfig, proc_stats_cache_ttl_ms_)
      + sizeof(ProcessStatsConfig::proc_stats_cache_ttl_ms_)
      - PROTOBUF_FIELD_OFFSET(ProcessStatsConfig, proc_stats_poll_ms_)>(
          reinterpret_cast<char*>(&proc_stats_poll_ms_),
          reinterpret_cast<char*>(&other->proc_stats_poll_ms_));
}

std::string ProcessStatsConfig::GetTypeName() const {
  return "perfetto.protos.ProcessStatsConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ProcessStatsConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::ProcessStatsConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ProcessStatsConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>