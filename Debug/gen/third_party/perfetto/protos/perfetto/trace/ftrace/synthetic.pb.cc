// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/synthetic.proto

#include "protos/perfetto/trace/ftrace/synthetic.pb.h"

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
PROTOBUF_CONSTEXPR RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(
    ::_pbi::ConstantInitialized)
  : curr_(0u)
  , member_(0)
  , size_(int64_t{0})
  , mm_id_(0u){}
struct RssStatThrottledFtraceEventDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RssStatThrottledFtraceEventDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RssStatThrottledFtraceEventDefaultTypeInternal() {}
  union {
    RssStatThrottledFtraceEvent _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RssStatThrottledFtraceEventDefaultTypeInternal _RssStatThrottledFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class RssStatThrottledFtraceEvent::_Internal {
 public:
  using HasBits = decltype(std::declval<RssStatThrottledFtraceEvent>()._has_bits_);
  static void set_has_curr(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_member(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_mm_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_size(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.RssStatThrottledFtraceEvent)
}
RssStatThrottledFtraceEvent::RssStatThrottledFtraceEvent(const RssStatThrottledFtraceEvent& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&curr_, &from.curr_,
    static_cast<size_t>(reinterpret_cast<char*>(&mm_id_) -
    reinterpret_cast<char*>(&curr_)) + sizeof(mm_id_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.RssStatThrottledFtraceEvent)
}

inline void RssStatThrottledFtraceEvent::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&curr_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&mm_id_) -
    reinterpret_cast<char*>(&curr_)) + sizeof(mm_id_));
}

RssStatThrottledFtraceEvent::~RssStatThrottledFtraceEvent() {
  // @@protoc_insertion_point(destructor:perfetto.protos.RssStatThrottledFtraceEvent)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RssStatThrottledFtraceEvent::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void RssStatThrottledFtraceEvent::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RssStatThrottledFtraceEvent::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.RssStatThrottledFtraceEvent)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&curr_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&mm_id_) -
        reinterpret_cast<char*>(&curr_)) + sizeof(mm_id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* RssStatThrottledFtraceEvent::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 curr = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_curr(&has_bits);
          curr_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 member = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_member(&has_bits);
          member_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 mm_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_mm_id(&has_bits);
          mm_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 size = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_size(&has_bits);
          size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* RssStatThrottledFtraceEvent::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.RssStatThrottledFtraceEvent)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 curr = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_curr(), target);
  }

  // optional int32 member = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_member(), target);
  }

  // optional uint32 mm_id = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_mm_id(), target);
  }

  // optional int64 size = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(4, this->_internal_size(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.RssStatThrottledFtraceEvent)
  return target;
}

size_t RssStatThrottledFtraceEvent::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.RssStatThrottledFtraceEvent)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional uint32 curr = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_curr());
    }

    // optional int32 member = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_member());
    }

    // optional int64 size = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_size());
    }

    // optional uint32 mm_id = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_mm_id());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RssStatThrottledFtraceEvent::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const RssStatThrottledFtraceEvent*>(
      &from));
}

void RssStatThrottledFtraceEvent::MergeFrom(const RssStatThrottledFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.RssStatThrottledFtraceEvent)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      curr_ = from.curr_;
    }
    if (cached_has_bits & 0x00000002u) {
      member_ = from.member_;
    }
    if (cached_has_bits & 0x00000004u) {
      size_ = from.size_;
    }
    if (cached_has_bits & 0x00000008u) {
      mm_id_ = from.mm_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void RssStatThrottledFtraceEvent::CopyFrom(const RssStatThrottledFtraceEvent& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.RssStatThrottledFtraceEvent)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RssStatThrottledFtraceEvent::IsInitialized() const {
  return true;
}

void RssStatThrottledFtraceEvent::InternalSwap(RssStatThrottledFtraceEvent* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RssStatThrottledFtraceEvent, mm_id_)
      + sizeof(RssStatThrottledFtraceEvent::mm_id_)
      - PROTOBUF_FIELD_OFFSET(RssStatThrottledFtraceEvent, curr_)>(
          reinterpret_cast<char*>(&curr_),
          reinterpret_cast<char*>(&other->curr_));
}

std::string RssStatThrottledFtraceEvent::GetTypeName() const {
  return "perfetto.protos.RssStatThrottledFtraceEvent";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::RssStatThrottledFtraceEvent*
Arena::CreateMaybeMessage< ::perfetto::protos::RssStatThrottledFtraceEvent >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::RssStatThrottledFtraceEvent >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
