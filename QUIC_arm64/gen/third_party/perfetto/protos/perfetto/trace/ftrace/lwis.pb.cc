// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/lwis.proto

#include "protos/perfetto/trace/ftrace/lwis.pb.h"

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
PROTOBUF_CONSTEXPR LwisTracingMarkWriteFtraceEvent::LwisTracingMarkWriteFtraceEvent(
    ::_pbi::ConstantInitialized)
  : lwis_name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , func_name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , type_(0u)
  , pid_(0)
  , value_(int64_t{0}){}
struct LwisTracingMarkWriteFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LwisTracingMarkWriteFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LwisTracingMarkWriteFtraceEventDefaultTypeInternal() {}
  union {
    LwisTracingMarkWriteFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LwisTracingMarkWriteFtraceEventDefaultTypeInternal _LwisTracingMarkWriteFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class LwisTracingMarkWriteFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<LwisTracingMarkWriteFtraceEvent>()._has_bits_);
  static void set_has_lwis_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_func_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

LwisTracingMarkWriteFtraceEvent::LwisTracingMarkWriteFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
}
LwisTracingMarkWriteFtraceEvent::LwisTracingMarkWriteFtraceEvent(const LwisTracingMarkWriteFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  lwis_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    lwis_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_lwis_name()) {
    lwis_name_.Set(from._internal_lwis_name(), 
      GetArenaForAllocation());
  }
  func_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    func_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_func_name()) {
    func_name_.Set(from._internal_func_name(), 
      GetArenaForAllocation());
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&type_)) + sizeof(value_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
}

inline void LwisTracingMarkWriteFtraceEvent::SharedCtor() {
lwis_name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  lwis_name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
func_name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  func_name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&type_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&type_)) + sizeof(value_));
}

LwisTracingMarkWriteFtraceEvent::~LwisTracingMarkWriteFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LwisTracingMarkWriteFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  lwis_name_.Destroy();
  func_name_.Destroy();
}

void LwisTracingMarkWriteFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LwisTracingMarkWriteFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      lwis_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      func_name_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000001cu) {
    ::memset(&type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&value_) -
        reinterpret_cast<char*>(&type_)) + sizeof(value_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* LwisTracingMarkWriteFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string lwis_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_lwis_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_type(&has_bits);
          type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 pid = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_pid(&has_bits);
          pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string func_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_func_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 value = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_value(&has_bits);
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* LwisTracingMarkWriteFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string lwis_name = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_lwis_name(), target);
  }

  // optional uint32 type = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_type(), target);
  }

  // optional int32 pid = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_pid(), target);
  }

  // optional string func_name = 4;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_func_name(), target);
  }

  // optional int64 value = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(5, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
  return target;
}

size_t LwisTracingMarkWriteFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string lwis_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_lwis_name());
    }

    // optional string func_name = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_func_name());
    }

    // optional uint32 type = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_type());
    }

    // optional int32 pid = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_pid());
    }

    // optional int64 value = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_value());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LwisTracingMarkWriteFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const LwisTracingMarkWriteFtraceEvent*>(
      &from));
}

void LwisTracingMarkWriteFtraceEvent::MergeFrom(const LwisTracingMarkWriteFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_lwis_name(from._internal_lwis_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_func_name(from._internal_func_name());
    }
    if (cached_has_bits & 0x00000004u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000008u) {
      pid_ = from.pid_;
    }
    if (cached_has_bits & 0x00000010u) {
      value_ = from.value_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void LwisTracingMarkWriteFtraceEvent::CopyFrom(const LwisTracingMarkWriteFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.LwisTracingMarkWriteFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LwisTracingMarkWriteFtraceEvent::IsInitialized() const {
  return true;
}

void LwisTracingMarkWriteFtraceEvent::InternalSwap(LwisTracingMarkWriteFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &lwis_name_, lhs_arena,
      &other->lwis_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &func_name_, lhs_arena,
      &other->func_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LwisTracingMarkWriteFtraceEvent, value_)
      + sizeof(LwisTracingMarkWriteFtraceEvent::value_)
      - PROTOBUF_FIELD_OFFSET(LwisTracingMarkWriteFtraceEvent, type_)>(
          reinterpret_cast<char*>(&type_),
          reinterpret_cast<char*>(&other->type_));
}

std::string LwisTracingMarkWriteFtraceEvent::GetTypeName() const {
  return "perfetto.protos.LwisTracingMarkWriteFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::LwisTracingMarkWriteFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::LwisTracingMarkWriteFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::LwisTracingMarkWriteFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
