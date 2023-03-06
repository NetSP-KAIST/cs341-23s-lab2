// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/network_trace_config.proto

#include "protos/perfetto/config/android/network_trace_config.pb.h"

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
PROTOBUF_CONSTEXPR NetworkPacketTraceConfig::NetworkPacketTraceConfig(
    ::_pbi::ConstantInitialized)
  : poll_ms_(0u){}
struct NetworkPacketTraceConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NetworkPacketTraceConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NetworkPacketTraceConfigDefaultTypeInternal() {}
  union {
    NetworkPacketTraceConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NetworkPacketTraceConfigDefaultTypeInternal _NetworkPacketTraceConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class NetworkPacketTraceConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<NetworkPacketTraceConfig>()._has_bits_);
  static void set_has_poll_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

NetworkPacketTraceConfig::NetworkPacketTraceConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.NetworkPacketTraceConfig)
}
NetworkPacketTraceConfig::NetworkPacketTraceConfig(const NetworkPacketTraceConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  poll_ms_ = from.poll_ms_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.NetworkPacketTraceConfig)
}

inline void NetworkPacketTraceConfig::SharedCtor() {
poll_ms_ = 0u;
}

NetworkPacketTraceConfig::~NetworkPacketTraceConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.NetworkPacketTraceConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NetworkPacketTraceConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void NetworkPacketTraceConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NetworkPacketTraceConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.NetworkPacketTraceConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  poll_ms_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* NetworkPacketTraceConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 poll_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_poll_ms(&has_bits);
          poll_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* NetworkPacketTraceConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.NetworkPacketTraceConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 poll_ms = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_poll_ms(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.NetworkPacketTraceConfig)
  return target;
}

size_t NetworkPacketTraceConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.NetworkPacketTraceConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional uint32 poll_ms = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_poll_ms());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NetworkPacketTraceConfig::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const NetworkPacketTraceConfig*>(
      &from));
}

void NetworkPacketTraceConfig::MergeFrom(const NetworkPacketTraceConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.NetworkPacketTraceConfig)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_poll_ms()) {
    _internal_set_poll_ms(from._internal_poll_ms());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void NetworkPacketTraceConfig::CopyFrom(const NetworkPacketTraceConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.NetworkPacketTraceConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetworkPacketTraceConfig::IsInitialized() const {
  return true;
}

void NetworkPacketTraceConfig::InternalSwap(NetworkPacketTraceConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(poll_ms_, other->poll_ms_);
}

std::string NetworkPacketTraceConfig::GetTypeName() const {
  return "perfetto.protos.NetworkPacketTraceConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::NetworkPacketTraceConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::NetworkPacketTraceConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::NetworkPacketTraceConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>