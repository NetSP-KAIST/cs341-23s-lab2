// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/scm.proto

#include "protos/perfetto/trace/ftrace/scm.pb.h"

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
PROTOBUF_CONSTEXPR ScmCallStartFtraceEvent::ScmCallStartFtraceEvent(
    ::_pbi::ConstantInitialized)
  : x0_(uint64_t{0u})
  , x5_(uint64_t{0u})
  , arginfo_(0u){}
struct ScmCallStartFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ScmCallStartFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ScmCallStartFtraceEventDefaultTypeInternal() {}
  union {
    ScmCallStartFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ScmCallStartFtraceEventDefaultTypeInternal _ScmCallStartFtraceEvent_default_instance_;
PROTOBUF_CONSTEXPR ScmCallEndFtraceEvent::ScmCallEndFtraceEvent(
    ::_pbi::ConstantInitialized){}
struct ScmCallEndFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ScmCallEndFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ScmCallEndFtraceEventDefaultTypeInternal() {}
  union {
    ScmCallEndFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ScmCallEndFtraceEventDefaultTypeInternal _ScmCallEndFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class ScmCallStartFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<ScmCallStartFtraceEvent>()._has_bits_);
  static void set_has_arginfo(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_x0(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_x5(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ScmCallStartFtraceEvent::ScmCallStartFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ScmCallStartFtraceEvent)
}
ScmCallStartFtraceEvent::ScmCallStartFtraceEvent(const ScmCallStartFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&x0_, &from.x0_,
    static_cast<size_t>(reinterpret_cast<char*>(&arginfo_) -
    reinterpret_cast<char*>(&x0_)) + sizeof(arginfo_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ScmCallStartFtraceEvent)
}

inline void ScmCallStartFtraceEvent::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&x0_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&arginfo_) -
    reinterpret_cast<char*>(&x0_)) + sizeof(arginfo_));
}

ScmCallStartFtraceEvent::~ScmCallStartFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ScmCallStartFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ScmCallStartFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ScmCallStartFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ScmCallStartFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ScmCallStartFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&x0_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&arginfo_) -
        reinterpret_cast<char*>(&x0_)) + sizeof(arginfo_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ScmCallStartFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 arginfo = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_arginfo(&has_bits);
          arginfo_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 x0 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_x0(&has_bits);
          x0_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 x5 = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_x5(&has_bits);
          x5_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* ScmCallStartFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ScmCallStartFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 arginfo = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_arginfo(), target);
  }

  // optional uint64 x0 = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_x0(), target);
  }

  // optional uint64 x5 = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_x5(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ScmCallStartFtraceEvent)
  return target;
}

size_t ScmCallStartFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ScmCallStartFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional uint64 x0 = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_x0());
    }

    // optional uint64 x5 = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_x5());
    }

    // optional uint32 arginfo = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_arginfo());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ScmCallStartFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ScmCallStartFtraceEvent*>(
      &from));
}

void ScmCallStartFtraceEvent::MergeFrom(const ScmCallStartFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ScmCallStartFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      x0_ = from.x0_;
    }
    if (cached_has_bits & 0x00000002u) {
      x5_ = from.x5_;
    }
    if (cached_has_bits & 0x00000004u) {
      arginfo_ = from.arginfo_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ScmCallStartFtraceEvent::CopyFrom(const ScmCallStartFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ScmCallStartFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScmCallStartFtraceEvent::IsInitialized() const {
  return true;
}

void ScmCallStartFtraceEvent::InternalSwap(ScmCallStartFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ScmCallStartFtraceEvent, arginfo_)
      + sizeof(ScmCallStartFtraceEvent::arginfo_)
      - PROTOBUF_FIELD_OFFSET(ScmCallStartFtraceEvent, x0_)>(
          reinterpret_cast<char*>(&x0_),
          reinterpret_cast<char*>(&other->x0_));
}

std::string ScmCallStartFtraceEvent::GetTypeName() const {
  return "perfetto.protos.ScmCallStartFtraceEvent";
}


// ===================================================================

class ScmCallEndFtraceEvent::_Internal {
 public:
};

ScmCallEndFtraceEvent::ScmCallEndFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ScmCallEndFtraceEvent)
}
ScmCallEndFtraceEvent::ScmCallEndFtraceEvent(const ScmCallEndFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite() {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ScmCallEndFtraceEvent)
}

inline void ScmCallEndFtraceEvent::SharedCtor() {
}

ScmCallEndFtraceEvent::~ScmCallEndFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ScmCallEndFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ScmCallEndFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ScmCallEndFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ScmCallEndFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ScmCallEndFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<std::string>();
}

const char* ScmCallEndFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ScmCallEndFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ScmCallEndFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ScmCallEndFtraceEvent)
  return target;
}

size_t ScmCallEndFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ScmCallEndFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ScmCallEndFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ScmCallEndFtraceEvent*>(
      &from));
}

void ScmCallEndFtraceEvent::MergeFrom(const ScmCallEndFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ScmCallEndFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ScmCallEndFtraceEvent::CopyFrom(const ScmCallEndFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ScmCallEndFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ScmCallEndFtraceEvent::IsInitialized() const {
  return true;
}

void ScmCallEndFtraceEvent::InternalSwap(ScmCallEndFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

std::string ScmCallEndFtraceEvent::GetTypeName() const {
  return "perfetto.protos.ScmCallEndFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ScmCallStartFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::ScmCallStartFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ScmCallStartFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::ScmCallEndFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::ScmCallEndFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ScmCallEndFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
