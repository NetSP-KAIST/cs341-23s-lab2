// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/lowmemorykiller.proto

#include "protos/perfetto/trace/ftrace/lowmemorykiller.pb.h"

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
PROTOBUF_CONSTEXPR LowmemoryKillFtraceEvent::LowmemoryKillFtraceEvent(
    ::_pbi::ConstantInitialized)
  : comm_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , pagecache_size_(int64_t{0})
  , pagecache_limit_(int64_t{0})
  , free_(int64_t{0})
  , pid_(0){}
struct LowmemoryKillFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LowmemoryKillFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LowmemoryKillFtraceEventDefaultTypeInternal() {}
  union {
    LowmemoryKillFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LowmemoryKillFtraceEventDefaultTypeInternal _LowmemoryKillFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class LowmemoryKillFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<LowmemoryKillFtraceEvent>()._has_bits_);
  static void set_has_comm(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_pagecache_size(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_pagecache_limit(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_free(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

LowmemoryKillFtraceEvent::LowmemoryKillFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.LowmemoryKillFtraceEvent)
}
LowmemoryKillFtraceEvent::LowmemoryKillFtraceEvent(const LowmemoryKillFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  comm_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    comm_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_comm()) {
    comm_.Set(from._internal_comm(), 
      GetArenaForAllocation());
  }
  ::memcpy(&pagecache_size_, &from.pagecache_size_,
    static_cast<size_t>(reinterpret_cast<char*>(&pid_) -
    reinterpret_cast<char*>(&pagecache_size_)) + sizeof(pid_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.LowmemoryKillFtraceEvent)
}

inline void LowmemoryKillFtraceEvent::SharedCtor() {
comm_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  comm_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&pagecache_size_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&pid_) -
    reinterpret_cast<char*>(&pagecache_size_)) + sizeof(pid_));
}

LowmemoryKillFtraceEvent::~LowmemoryKillFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.LowmemoryKillFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LowmemoryKillFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  comm_.Destroy();
}

void LowmemoryKillFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LowmemoryKillFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.LowmemoryKillFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    comm_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x0000001eu) {
    ::memset(&pagecache_size_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&pid_) -
        reinterpret_cast<char*>(&pagecache_size_)) + sizeof(pid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* LowmemoryKillFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string comm = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_comm();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 pid = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_pid(&has_bits);
          pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 pagecache_size = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_pagecache_size(&has_bits);
          pagecache_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 pagecache_limit = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_pagecache_limit(&has_bits);
          pagecache_limit_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 free = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_free(&has_bits);
          free_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* LowmemoryKillFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.LowmemoryKillFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string comm = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_comm(), target);
  }

  // optional int32 pid = 2;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_pid(), target);
  }

  // optional int64 pagecache_size = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_pagecache_size(), target);
  }

  // optional int64 pagecache_limit = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_pagecache_limit(), target);
  }

  // optional int64 free = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(5, this->_internal_free(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.LowmemoryKillFtraceEvent)
  return target;
}

size_t LowmemoryKillFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.LowmemoryKillFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string comm = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_comm());
    }

    // optional int64 pagecache_size = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_pagecache_size());
    }

    // optional int64 pagecache_limit = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_pagecache_limit());
    }

    // optional int64 free = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_free());
    }

    // optional int32 pid = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_pid());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LowmemoryKillFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const LowmemoryKillFtraceEvent*>(
      &from));
}

void LowmemoryKillFtraceEvent::MergeFrom(const LowmemoryKillFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.LowmemoryKillFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_comm(from._internal_comm());
    }
    if (cached_has_bits & 0x00000002u) {
      pagecache_size_ = from.pagecache_size_;
    }
    if (cached_has_bits & 0x00000004u) {
      pagecache_limit_ = from.pagecache_limit_;
    }
    if (cached_has_bits & 0x00000008u) {
      free_ = from.free_;
    }
    if (cached_has_bits & 0x00000010u) {
      pid_ = from.pid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void LowmemoryKillFtraceEvent::CopyFrom(const LowmemoryKillFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.LowmemoryKillFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LowmemoryKillFtraceEvent::IsInitialized() const {
  return true;
}

void LowmemoryKillFtraceEvent::InternalSwap(LowmemoryKillFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &comm_, lhs_arena,
      &other->comm_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LowmemoryKillFtraceEvent, pid_)
      + sizeof(LowmemoryKillFtraceEvent::pid_)
      - PROTOBUF_FIELD_OFFSET(LowmemoryKillFtraceEvent, pagecache_size_)>(
          reinterpret_cast<char*>(&pagecache_size_),
          reinterpret_cast<char*>(&other->pagecache_size_));
}

std::string LowmemoryKillFtraceEvent::GetTypeName() const {
  return "perfetto.protos.LowmemoryKillFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::LowmemoryKillFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::LowmemoryKillFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::LowmemoryKillFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
