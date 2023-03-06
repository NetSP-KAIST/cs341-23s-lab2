// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/virtio_gpu.proto

#include "protos/perfetto/trace/ftrace/virtio_gpu.pb.h"

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
PROTOBUF_CONSTEXPR VirtioGpuCmdQueueFtraceEvent::VirtioGpuCmdQueueFtraceEvent(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , ctx_id_(0u)
  , dev_(0)
  , fence_id_(uint64_t{0u})
  , flags_(0u)
  , num_free_(0u)
  , seqno_(0u)
  , type_(0u)
  , vq_(0u){}
struct VirtioGpuCmdQueueFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VirtioGpuCmdQueueFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VirtioGpuCmdQueueFtraceEventDefaultTypeInternal() {}
  union {
    VirtioGpuCmdQueueFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VirtioGpuCmdQueueFtraceEventDefaultTypeInternal _VirtioGpuCmdQueueFtraceEvent_default_instance_;
PROTOBUF_CONSTEXPR VirtioGpuCmdResponseFtraceEvent::VirtioGpuCmdResponseFtraceEvent(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , ctx_id_(0u)
  , dev_(0)
  , fence_id_(uint64_t{0u})
  , flags_(0u)
  , num_free_(0u)
  , seqno_(0u)
  , type_(0u)
  , vq_(0u){}
struct VirtioGpuCmdResponseFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VirtioGpuCmdResponseFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VirtioGpuCmdResponseFtraceEventDefaultTypeInternal() {}
  union {
    VirtioGpuCmdResponseFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VirtioGpuCmdResponseFtraceEventDefaultTypeInternal _VirtioGpuCmdResponseFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class VirtioGpuCmdQueueFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<VirtioGpuCmdQueueFtraceEvent>()._has_bits_);
  static void set_has_ctx_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_dev(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_fence_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_flags(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_num_free(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_seqno(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_vq(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
};

VirtioGpuCmdQueueFtraceEvent::VirtioGpuCmdQueueFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
}
VirtioGpuCmdQueueFtraceEvent::VirtioGpuCmdQueueFtraceEvent(const VirtioGpuCmdQueueFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  ::memcpy(&ctx_id_, &from.ctx_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&vq_) -
    reinterpret_cast<char*>(&ctx_id_)) + sizeof(vq_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
}

inline void VirtioGpuCmdQueueFtraceEvent::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&ctx_id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&vq_) -
    reinterpret_cast<char*>(&ctx_id_)) + sizeof(vq_));
}

VirtioGpuCmdQueueFtraceEvent::~VirtioGpuCmdQueueFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void VirtioGpuCmdQueueFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
}

void VirtioGpuCmdQueueFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void VirtioGpuCmdQueueFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x000000feu) {
    ::memset(&ctx_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&ctx_id_)) + sizeof(type_));
  }
  vq_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* VirtioGpuCmdQueueFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 ctx_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_ctx_id(&has_bits);
          ctx_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 dev = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_dev(&has_bits);
          dev_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 fence_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_fence_id(&has_bits);
          fence_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 flags = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_flags(&has_bits);
          flags_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 num_free = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_num_free(&has_bits);
          num_free_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 seqno = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_seqno(&has_bits);
          seqno_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 type = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_type(&has_bits);
          type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 vq = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_vq(&has_bits);
          vq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* VirtioGpuCmdQueueFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 ctx_id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_ctx_id(), target);
  }

  // optional int32 dev = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_dev(), target);
  }

  // optional uint64 fence_id = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_fence_id(), target);
  }

  // optional uint32 flags = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_flags(), target);
  }

  // optional string name = 5;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_name(), target);
  }

  // optional uint32 num_free = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(6, this->_internal_num_free(), target);
  }

  // optional uint32 seqno = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(7, this->_internal_seqno(), target);
  }

  // optional uint32 type = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(8, this->_internal_type(), target);
  }

  // optional uint32 vq = 9;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(9, this->_internal_vq(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
  return target;
}

size_t VirtioGpuCmdQueueFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string name = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional uint32 ctx_id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_ctx_id());
    }

    // optional int32 dev = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_dev());
    }

    // optional uint64 fence_id = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_fence_id());
    }

    // optional uint32 flags = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_flags());
    }

    // optional uint32 num_free = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_num_free());
    }

    // optional uint32 seqno = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_seqno());
    }

    // optional uint32 type = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_type());
    }

  }
  // optional uint32 vq = 9;
  if (cached_has_bits & 0x00000100u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_vq());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VirtioGpuCmdQueueFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const VirtioGpuCmdQueueFtraceEvent*>(
      &from));
}

void VirtioGpuCmdQueueFtraceEvent::MergeFrom(const VirtioGpuCmdQueueFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      ctx_id_ = from.ctx_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      dev_ = from.dev_;
    }
    if (cached_has_bits & 0x00000008u) {
      fence_id_ = from.fence_id_;
    }
    if (cached_has_bits & 0x00000010u) {
      flags_ = from.flags_;
    }
    if (cached_has_bits & 0x00000020u) {
      num_free_ = from.num_free_;
    }
    if (cached_has_bits & 0x00000040u) {
      seqno_ = from.seqno_;
    }
    if (cached_has_bits & 0x00000080u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _internal_set_vq(from._internal_vq());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void VirtioGpuCmdQueueFtraceEvent::CopyFrom(const VirtioGpuCmdQueueFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.VirtioGpuCmdQueueFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VirtioGpuCmdQueueFtraceEvent::IsInitialized() const {
  return true;
}

void VirtioGpuCmdQueueFtraceEvent::InternalSwap(VirtioGpuCmdQueueFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VirtioGpuCmdQueueFtraceEvent, vq_)
      + sizeof(VirtioGpuCmdQueueFtraceEvent::vq_)
      - PROTOBUF_FIELD_OFFSET(VirtioGpuCmdQueueFtraceEvent, ctx_id_)>(
          reinterpret_cast<char*>(&ctx_id_),
          reinterpret_cast<char*>(&other->ctx_id_));
}

std::string VirtioGpuCmdQueueFtraceEvent::GetTypeName() const {
  return "perfetto.protos.VirtioGpuCmdQueueFtraceEvent";
}


// ===================================================================

class VirtioGpuCmdResponseFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<VirtioGpuCmdResponseFtraceEvent>()._has_bits_);
  static void set_has_ctx_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_dev(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_fence_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_flags(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_num_free(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_seqno(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_vq(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
};

VirtioGpuCmdResponseFtraceEvent::VirtioGpuCmdResponseFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
}
VirtioGpuCmdResponseFtraceEvent::VirtioGpuCmdResponseFtraceEvent(const VirtioGpuCmdResponseFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  ::memcpy(&ctx_id_, &from.ctx_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&vq_) -
    reinterpret_cast<char*>(&ctx_id_)) + sizeof(vq_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
}

inline void VirtioGpuCmdResponseFtraceEvent::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&ctx_id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&vq_) -
    reinterpret_cast<char*>(&ctx_id_)) + sizeof(vq_));
}

VirtioGpuCmdResponseFtraceEvent::~VirtioGpuCmdResponseFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void VirtioGpuCmdResponseFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
}

void VirtioGpuCmdResponseFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void VirtioGpuCmdResponseFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x000000feu) {
    ::memset(&ctx_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&ctx_id_)) + sizeof(type_));
  }
  vq_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* VirtioGpuCmdResponseFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 ctx_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_ctx_id(&has_bits);
          ctx_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 dev = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_dev(&has_bits);
          dev_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 fence_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_fence_id(&has_bits);
          fence_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 flags = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_flags(&has_bits);
          flags_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 num_free = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_num_free(&has_bits);
          num_free_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 seqno = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_seqno(&has_bits);
          seqno_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 type = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _Internal::set_has_type(&has_bits);
          type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 vq = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_vq(&has_bits);
          vq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* VirtioGpuCmdResponseFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 ctx_id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_ctx_id(), target);
  }

  // optional int32 dev = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_dev(), target);
  }

  // optional uint64 fence_id = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_fence_id(), target);
  }

  // optional uint32 flags = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_flags(), target);
  }

  // optional string name = 5;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_name(), target);
  }

  // optional uint32 num_free = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(6, this->_internal_num_free(), target);
  }

  // optional uint32 seqno = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(7, this->_internal_seqno(), target);
  }

  // optional uint32 type = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(8, this->_internal_type(), target);
  }

  // optional uint32 vq = 9;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(9, this->_internal_vq(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
  return target;
}

size_t VirtioGpuCmdResponseFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string name = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional uint32 ctx_id = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_ctx_id());
    }

    // optional int32 dev = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_dev());
    }

    // optional uint64 fence_id = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_fence_id());
    }

    // optional uint32 flags = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_flags());
    }

    // optional uint32 num_free = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_num_free());
    }

    // optional uint32 seqno = 7;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_seqno());
    }

    // optional uint32 type = 8;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_type());
    }

  }
  // optional uint32 vq = 9;
  if (cached_has_bits & 0x00000100u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_vq());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VirtioGpuCmdResponseFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const VirtioGpuCmdResponseFtraceEvent*>(
      &from));
}

void VirtioGpuCmdResponseFtraceEvent::MergeFrom(const VirtioGpuCmdResponseFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      ctx_id_ = from.ctx_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      dev_ = from.dev_;
    }
    if (cached_has_bits & 0x00000008u) {
      fence_id_ = from.fence_id_;
    }
    if (cached_has_bits & 0x00000010u) {
      flags_ = from.flags_;
    }
    if (cached_has_bits & 0x00000020u) {
      num_free_ = from.num_free_;
    }
    if (cached_has_bits & 0x00000040u) {
      seqno_ = from.seqno_;
    }
    if (cached_has_bits & 0x00000080u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _internal_set_vq(from._internal_vq());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void VirtioGpuCmdResponseFtraceEvent::CopyFrom(const VirtioGpuCmdResponseFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.VirtioGpuCmdResponseFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VirtioGpuCmdResponseFtraceEvent::IsInitialized() const {
  return true;
}

void VirtioGpuCmdResponseFtraceEvent::InternalSwap(VirtioGpuCmdResponseFtraceEvent* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VirtioGpuCmdResponseFtraceEvent, vq_)
      + sizeof(VirtioGpuCmdResponseFtraceEvent::vq_)
      - PROTOBUF_FIELD_OFFSET(VirtioGpuCmdResponseFtraceEvent, ctx_id_)>(
          reinterpret_cast<char*>(&ctx_id_),
          reinterpret_cast<char*>(&other->ctx_id_));
}

std::string VirtioGpuCmdResponseFtraceEvent::GetTypeName() const {
  return "perfetto.protos.VirtioGpuCmdResponseFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::VirtioGpuCmdQueueFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::VirtioGpuCmdQueueFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::VirtioGpuCmdQueueFtraceEvent >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::VirtioGpuCmdResponseFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::VirtioGpuCmdResponseFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::VirtioGpuCmdResponseFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>