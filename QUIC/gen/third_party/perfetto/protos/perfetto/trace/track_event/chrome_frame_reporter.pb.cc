// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_frame_reporter.proto

#include "protos/perfetto/trace/track_event/chrome_frame_reporter.pb.h"

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
PROTOBUF_CONSTEXPR ChromeFrameReporter::ChromeFrameReporter(
    ::_pbi::ConstantInitialized)
  : high_latency_contribution_stage_()
  , state_(0)

  , reason_(0)

  , frame_source_(uint64_t{0u})
  , frame_sequence_(uint64_t{0u})
  , scroll_state_(0)

  , affects_smoothness_(false)
  , has_main_animation_(false)
  , has_compositor_animation_(false)
  , has_smooth_input_main_(false)
  , layer_tree_host_id_(uint64_t{0u})
  , has_missing_content_(false)
  , has_high_latency_(false)
  , frame_type_(0)
{}
struct ChromeFrameReporterDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeFrameReporterDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeFrameReporterDefaultTypeInternal() {}
  union {
    ChromeFrameReporter _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeFrameReporterDefaultTypeInternal _ChromeFrameReporter_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {
bool ChromeFrameReporter_State_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ChromeFrameReporter_State_strings[4] = {};

static const char ChromeFrameReporter_State_names[] =
  "STATE_DROPPED"
  "STATE_NO_UPDATE_DESIRED"
  "STATE_PRESENTED_ALL"
  "STATE_PRESENTED_PARTIAL";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ChromeFrameReporter_State_entries[] = {
  { {ChromeFrameReporter_State_names + 0, 13}, 3 },
  { {ChromeFrameReporter_State_names + 13, 23}, 0 },
  { {ChromeFrameReporter_State_names + 36, 19}, 1 },
  { {ChromeFrameReporter_State_names + 55, 23}, 2 },
};

static const int ChromeFrameReporter_State_entries_by_number[] = {
  1, // 0 -> STATE_NO_UPDATE_DESIRED
  2, // 1 -> STATE_PRESENTED_ALL
  3, // 2 -> STATE_PRESENTED_PARTIAL
  0, // 3 -> STATE_DROPPED
};

const std::string& ChromeFrameReporter_State_Name(
    ChromeFrameReporter_State value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ChromeFrameReporter_State_entries,
          ChromeFrameReporter_State_entries_by_number,
          4, ChromeFrameReporter_State_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ChromeFrameReporter_State_entries,
      ChromeFrameReporter_State_entries_by_number,
      4, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ChromeFrameReporter_State_strings[idx].get();
}
bool ChromeFrameReporter_State_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChromeFrameReporter_State* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ChromeFrameReporter_State_entries, 4, name, &int_value);
  if (success) {
    *value = static_cast<ChromeFrameReporter_State>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_NO_UPDATE_DESIRED;
constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_PRESENTED_ALL;
constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_PRESENTED_PARTIAL;
constexpr ChromeFrameReporter_State ChromeFrameReporter::STATE_DROPPED;
constexpr ChromeFrameReporter_State ChromeFrameReporter::State_MIN;
constexpr ChromeFrameReporter_State ChromeFrameReporter::State_MAX;
constexpr int ChromeFrameReporter::State_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
bool ChromeFrameReporter_FrameDropReason_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ChromeFrameReporter_FrameDropReason_strings[4] = {};

static const char ChromeFrameReporter_FrameDropReason_names[] =
  "REASON_CLIENT_COMPOSITOR"
  "REASON_DISPLAY_COMPOSITOR"
  "REASON_MAIN_THREAD"
  "REASON_UNSPECIFIED";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ChromeFrameReporter_FrameDropReason_entries[] = {
  { {ChromeFrameReporter_FrameDropReason_names + 0, 24}, 3 },
  { {ChromeFrameReporter_FrameDropReason_names + 24, 25}, 1 },
  { {ChromeFrameReporter_FrameDropReason_names + 49, 18}, 2 },
  { {ChromeFrameReporter_FrameDropReason_names + 67, 18}, 0 },
};

static const int ChromeFrameReporter_FrameDropReason_entries_by_number[] = {
  3, // 0 -> REASON_UNSPECIFIED
  1, // 1 -> REASON_DISPLAY_COMPOSITOR
  2, // 2 -> REASON_MAIN_THREAD
  0, // 3 -> REASON_CLIENT_COMPOSITOR
};

const std::string& ChromeFrameReporter_FrameDropReason_Name(
    ChromeFrameReporter_FrameDropReason value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ChromeFrameReporter_FrameDropReason_entries,
          ChromeFrameReporter_FrameDropReason_entries_by_number,
          4, ChromeFrameReporter_FrameDropReason_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ChromeFrameReporter_FrameDropReason_entries,
      ChromeFrameReporter_FrameDropReason_entries_by_number,
      4, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ChromeFrameReporter_FrameDropReason_strings[idx].get();
}
bool ChromeFrameReporter_FrameDropReason_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChromeFrameReporter_FrameDropReason* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ChromeFrameReporter_FrameDropReason_entries, 4, name, &int_value);
  if (success) {
    *value = static_cast<ChromeFrameReporter_FrameDropReason>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_UNSPECIFIED;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_DISPLAY_COMPOSITOR;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_MAIN_THREAD;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::REASON_CLIENT_COMPOSITOR;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::FrameDropReason_MIN;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter::FrameDropReason_MAX;
constexpr int ChromeFrameReporter::FrameDropReason_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
bool ChromeFrameReporter_ScrollState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ChromeFrameReporter_ScrollState_strings[4] = {};

static const char ChromeFrameReporter_ScrollState_names[] =
  "SCROLL_COMPOSITOR_THREAD"
  "SCROLL_MAIN_THREAD"
  "SCROLL_NONE"
  "SCROLL_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ChromeFrameReporter_ScrollState_entries[] = {
  { {ChromeFrameReporter_ScrollState_names + 0, 24}, 2 },
  { {ChromeFrameReporter_ScrollState_names + 24, 18}, 1 },
  { {ChromeFrameReporter_ScrollState_names + 42, 11}, 0 },
  { {ChromeFrameReporter_ScrollState_names + 53, 14}, 3 },
};

static const int ChromeFrameReporter_ScrollState_entries_by_number[] = {
  2, // 0 -> SCROLL_NONE
  1, // 1 -> SCROLL_MAIN_THREAD
  0, // 2 -> SCROLL_COMPOSITOR_THREAD
  3, // 3 -> SCROLL_UNKNOWN
};

const std::string& ChromeFrameReporter_ScrollState_Name(
    ChromeFrameReporter_ScrollState value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ChromeFrameReporter_ScrollState_entries,
          ChromeFrameReporter_ScrollState_entries_by_number,
          4, ChromeFrameReporter_ScrollState_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ChromeFrameReporter_ScrollState_entries,
      ChromeFrameReporter_ScrollState_entries_by_number,
      4, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ChromeFrameReporter_ScrollState_strings[idx].get();
}
bool ChromeFrameReporter_ScrollState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChromeFrameReporter_ScrollState* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ChromeFrameReporter_ScrollState_entries, 4, name, &int_value);
  if (success) {
    *value = static_cast<ChromeFrameReporter_ScrollState>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_NONE;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_MAIN_THREAD;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_COMPOSITOR_THREAD;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::SCROLL_UNKNOWN;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::ScrollState_MIN;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter::ScrollState_MAX;
constexpr int ChromeFrameReporter::ScrollState_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
bool ChromeFrameReporter_FrameType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ChromeFrameReporter_FrameType_strings[2] = {};

static const char ChromeFrameReporter_FrameType_names[] =
  "BACKFILL"
  "FORKED";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ChromeFrameReporter_FrameType_entries[] = {
  { {ChromeFrameReporter_FrameType_names + 0, 8}, 1 },
  { {ChromeFrameReporter_FrameType_names + 8, 6}, 0 },
};

static const int ChromeFrameReporter_FrameType_entries_by_number[] = {
  1, // 0 -> FORKED
  0, // 1 -> BACKFILL
};

const std::string& ChromeFrameReporter_FrameType_Name(
    ChromeFrameReporter_FrameType value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ChromeFrameReporter_FrameType_entries,
          ChromeFrameReporter_FrameType_entries_by_number,
          2, ChromeFrameReporter_FrameType_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ChromeFrameReporter_FrameType_entries,
      ChromeFrameReporter_FrameType_entries_by_number,
      2, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ChromeFrameReporter_FrameType_strings[idx].get();
}
bool ChromeFrameReporter_FrameType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChromeFrameReporter_FrameType* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ChromeFrameReporter_FrameType_entries, 2, name, &int_value);
  if (success) {
    *value = static_cast<ChromeFrameReporter_FrameType>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::FORKED;
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::BACKFILL;
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::FrameType_MIN;
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter::FrameType_MAX;
constexpr int ChromeFrameReporter::FrameType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ChromeFrameReporter::_Internal {
 public:
  using HasBits = decltype(std::declval<ChromeFrameReporter>()._has_bits_);
  static void set_has_state(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_reason(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_frame_source(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_frame_sequence(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_affects_smoothness(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_scroll_state(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_has_main_animation(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_has_compositor_animation(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_has_smooth_input_main(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_has_missing_content(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_layer_tree_host_id(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_has_high_latency(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_frame_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
};

ChromeFrameReporter::ChromeFrameReporter(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  high_latency_contribution_stage_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeFrameReporter)
}
ChromeFrameReporter::ChromeFrameReporter(const ChromeFrameReporter& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      high_latency_contribution_stage_(from.high_latency_contribution_stage_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&state_, &from.state_,
    static_cast<size_t>(reinterpret_cast<char*>(&frame_type_) -
    reinterpret_cast<char*>(&state_)) + sizeof(frame_type_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeFrameReporter)
}

inline void ChromeFrameReporter::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&state_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&frame_type_) -
    reinterpret_cast<char*>(&state_)) + sizeof(frame_type_));
}

ChromeFrameReporter::~ChromeFrameReporter() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeFrameReporter)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeFrameReporter::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ChromeFrameReporter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ChromeFrameReporter::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeFrameReporter)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  high_latency_contribution_stage_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    ::memset(&state_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&has_compositor_animation_) -
        reinterpret_cast<char*>(&state_)) + sizeof(has_compositor_animation_));
  }
  if (cached_has_bits & 0x00001f00u) {
    ::memset(&has_smooth_input_main_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&frame_type_) -
        reinterpret_cast<char*>(&has_smooth_input_main_)) + sizeof(frame_type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ChromeFrameReporter::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.ChromeFrameReporter.State state = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_State_IsValid(val))) {
            _internal_set_state(static_cast<::perfetto::protos::ChromeFrameReporter_State>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ChromeFrameReporter.FrameDropReason reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_FrameDropReason_IsValid(val))) {
            _internal_set_reason(static_cast<::perfetto::protos::ChromeFrameReporter_FrameDropReason>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional uint64 frame_source = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_frame_source(&has_bits);
          frame_source_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 frame_sequence = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_frame_sequence(&has_bits);
          frame_sequence_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool affects_smoothness = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_affects_smoothness(&has_bits);
          affects_smoothness_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ChromeFrameReporter.ScrollState scroll_state = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_ScrollState_IsValid(val))) {
            _internal_set_scroll_state(static_cast<::perfetto::protos::ChromeFrameReporter_ScrollState>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(6, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional bool has_main_animation = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_has_main_animation(&has_bits);
          has_main_animation_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool has_compositor_animation = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_has_compositor_animation(&has_bits);
          has_compositor_animation_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool has_smooth_input_main = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_has_smooth_input_main(&has_bits);
          has_smooth_input_main_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool has_missing_content = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _Internal::set_has_has_missing_content(&has_bits);
          has_missing_content_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 layer_tree_host_id = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _Internal::set_has_layer_tree_host_id(&has_bits);
          layer_tree_host_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool has_high_latency = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          _Internal::set_has_has_high_latency(&has_bits);
          has_high_latency_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .perfetto.protos.ChromeFrameReporter.FrameType frame_type = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeFrameReporter_FrameType_IsValid(val))) {
            _internal_set_frame_type(static_cast<::perfetto::protos::ChromeFrameReporter_FrameType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(13, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // repeated string high_latency_contribution_stage = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 114)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_high_latency_contribution_stage();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<114>(ptr));
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

uint8_t* ChromeFrameReporter::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeFrameReporter)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .perfetto.protos.ChromeFrameReporter.State state = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_state(), target);
  }

  // optional .perfetto.protos.ChromeFrameReporter.FrameDropReason reason = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_reason(), target);
  }

  // optional uint64 frame_source = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_frame_source(), target);
  }

  // optional uint64 frame_sequence = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_frame_sequence(), target);
  }

  // optional bool affects_smoothness = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_affects_smoothness(), target);
  }

  // optional .perfetto.protos.ChromeFrameReporter.ScrollState scroll_state = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      6, this->_internal_scroll_state(), target);
  }

  // optional bool has_main_animation = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_has_main_animation(), target);
  }

  // optional bool has_compositor_animation = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(8, this->_internal_has_compositor_animation(), target);
  }

  // optional bool has_smooth_input_main = 9;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(9, this->_internal_has_smooth_input_main(), target);
  }

  // optional bool has_missing_content = 10;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(10, this->_internal_has_missing_content(), target);
  }

  // optional uint64 layer_tree_host_id = 11;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(11, this->_internal_layer_tree_host_id(), target);
  }

  // optional bool has_high_latency = 12;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(12, this->_internal_has_high_latency(), target);
  }

  // optional .perfetto.protos.ChromeFrameReporter.FrameType frame_type = 13;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      13, this->_internal_frame_type(), target);
  }

  // repeated string high_latency_contribution_stage = 14;
  for (int i = 0, n = this->_internal_high_latency_contribution_stage_size(); i < n; i++) {
    const auto& s = this->_internal_high_latency_contribution_stage(i);
    target = stream->WriteString(14, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeFrameReporter)
  return target;
}

size_t ChromeFrameReporter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeFrameReporter)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string high_latency_contribution_stage = 14;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(high_latency_contribution_stage_.size());
  for (int i = 0, n = high_latency_contribution_stage_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      high_latency_contribution_stage_.Get(i));
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional .perfetto.protos.ChromeFrameReporter.State state = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_state());
    }

    // optional .perfetto.protos.ChromeFrameReporter.FrameDropReason reason = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_reason());
    }

    // optional uint64 frame_source = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_frame_source());
    }

    // optional uint64 frame_sequence = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_frame_sequence());
    }

    // optional .perfetto.protos.ChromeFrameReporter.ScrollState scroll_state = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_scroll_state());
    }

    // optional bool affects_smoothness = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 1;
    }

    // optional bool has_main_animation = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 1;
    }

    // optional bool has_compositor_animation = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 1;
    }

  }
  if (cached_has_bits & 0x00001f00u) {
    // optional bool has_smooth_input_main = 9;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 1;
    }

    // optional uint64 layer_tree_host_id = 11;
    if (cached_has_bits & 0x00000200u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_layer_tree_host_id());
    }

    // optional bool has_missing_content = 10;
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 + 1;
    }

    // optional bool has_high_latency = 12;
    if (cached_has_bits & 0x00000800u) {
      total_size += 1 + 1;
    }

    // optional .perfetto.protos.ChromeFrameReporter.FrameType frame_type = 13;
    if (cached_has_bits & 0x00001000u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_frame_type());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChromeFrameReporter::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ChromeFrameReporter*>(
      &from));
}

void ChromeFrameReporter::MergeFrom(const ChromeFrameReporter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeFrameReporter)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  high_latency_contribution_stage_.MergeFrom(from.high_latency_contribution_stage_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      state_ = from.state_;
    }
    if (cached_has_bits & 0x00000002u) {
      reason_ = from.reason_;
    }
    if (cached_has_bits & 0x00000004u) {
      frame_source_ = from.frame_source_;
    }
    if (cached_has_bits & 0x00000008u) {
      frame_sequence_ = from.frame_sequence_;
    }
    if (cached_has_bits & 0x00000010u) {
      scroll_state_ = from.scroll_state_;
    }
    if (cached_has_bits & 0x00000020u) {
      affects_smoothness_ = from.affects_smoothness_;
    }
    if (cached_has_bits & 0x00000040u) {
      has_main_animation_ = from.has_main_animation_;
    }
    if (cached_has_bits & 0x00000080u) {
      has_compositor_animation_ = from.has_compositor_animation_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00001f00u) {
    if (cached_has_bits & 0x00000100u) {
      has_smooth_input_main_ = from.has_smooth_input_main_;
    }
    if (cached_has_bits & 0x00000200u) {
      layer_tree_host_id_ = from.layer_tree_host_id_;
    }
    if (cached_has_bits & 0x00000400u) {
      has_missing_content_ = from.has_missing_content_;
    }
    if (cached_has_bits & 0x00000800u) {
      has_high_latency_ = from.has_high_latency_;
    }
    if (cached_has_bits & 0x00001000u) {
      frame_type_ = from.frame_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ChromeFrameReporter::CopyFrom(const ChromeFrameReporter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeFrameReporter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeFrameReporter::IsInitialized() const {
  return true;
}

void ChromeFrameReporter::InternalSwap(ChromeFrameReporter* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  high_latency_contribution_stage_.InternalSwap(&other->high_latency_contribution_stage_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChromeFrameReporter, frame_type_)
      + sizeof(ChromeFrameReporter::frame_type_)
      - PROTOBUF_FIELD_OFFSET(ChromeFrameReporter, state_)>(
          reinterpret_cast<char*>(&state_),
          reinterpret_cast<char*>(&other->state_));
}

std::string ChromeFrameReporter::GetTypeName() const {
  return "perfetto.protos.ChromeFrameReporter";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeFrameReporter*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeFrameReporter >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeFrameReporter >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>