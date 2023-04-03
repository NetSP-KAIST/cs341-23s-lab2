// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: network_id_proto.proto

#include "network_id_proto.pb.h"

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

namespace net {
namespace nqe {
namespace internal {
PROTOBUF_CONSTEXPR NetworkIDProto::NetworkIDProto(
    ::_pbi::ConstantInitialized)
  : id_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , connection_type_(0)
  , signal_strength_(0){}
struct NetworkIDProtoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NetworkIDProtoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NetworkIDProtoDefaultTypeInternal() {}
  union {
    NetworkIDProto _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NetworkIDProtoDefaultTypeInternal _NetworkIDProto_default_instance_;
}  // namespace internal
}  // namespace nqe
}  // namespace net
namespace net {
namespace nqe {
namespace internal {

// ===================================================================

class NetworkIDProto::_Internal {
 public:
  using HasBits = decltype(std::declval<NetworkIDProto>()._has_bits_);
  static void set_has_connection_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_signal_strength(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

NetworkIDProto::NetworkIDProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:net.nqe.internal.NetworkIDProto)
}
NetworkIDProto::NetworkIDProto(const NetworkIDProto& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_id()) {
    id_.Set(from._internal_id(), 
      GetArenaForAllocation());
  }
  ::memcpy(&connection_type_, &from.connection_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&signal_strength_) -
    reinterpret_cast<char*>(&connection_type_)) + sizeof(signal_strength_));
  // @@protoc_insertion_point(copy_constructor:net.nqe.internal.NetworkIDProto)
}

inline void NetworkIDProto::SharedCtor() {
id_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  id_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&connection_type_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&signal_strength_) -
    reinterpret_cast<char*>(&connection_type_)) + sizeof(signal_strength_));
}

NetworkIDProto::~NetworkIDProto() {
  // @@protoc_insertion_point(destructor:net.nqe.internal.NetworkIDProto)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NetworkIDProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  id_.Destroy();
}

void NetworkIDProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void NetworkIDProto::Clear() {
// @@protoc_insertion_point(message_clear_start:net.nqe.internal.NetworkIDProto)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    id_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&connection_type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&signal_strength_) -
        reinterpret_cast<char*>(&connection_type_)) + sizeof(signal_strength_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* NetworkIDProto::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 connection_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_connection_type(&has_bits);
          connection_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 signal_strength = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_signal_strength(&has_bits);
          signal_strength_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* NetworkIDProto::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:net.nqe.internal.NetworkIDProto)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 connection_type = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_connection_type(), target);
  }

  // optional string id = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_id(), target);
  }

  // optional int32 signal_strength = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_signal_strength(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:net.nqe.internal.NetworkIDProto)
  return target;
}

size_t NetworkIDProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:net.nqe.internal.NetworkIDProto)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string id = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_id());
    }

    // optional int32 connection_type = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_connection_type());
    }

    // optional int32 signal_strength = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_signal_strength());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NetworkIDProto::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const NetworkIDProto*>(
      &from));
}

void NetworkIDProto::MergeFrom(const NetworkIDProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:net.nqe.internal.NetworkIDProto)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_id(from._internal_id());
    }
    if (cached_has_bits & 0x00000002u) {
      connection_type_ = from.connection_type_;
    }
    if (cached_has_bits & 0x00000004u) {
      signal_strength_ = from.signal_strength_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void NetworkIDProto::CopyFrom(const NetworkIDProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:net.nqe.internal.NetworkIDProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetworkIDProto::IsInitialized() const {
  return true;
}

void NetworkIDProto::InternalSwap(NetworkIDProto* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &id_, lhs_arena,
      &other->id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(NetworkIDProto, signal_strength_)
      + sizeof(NetworkIDProto::signal_strength_)
      - PROTOBUF_FIELD_OFFSET(NetworkIDProto, connection_type_)>(
          reinterpret_cast<char*>(&connection_type_),
          reinterpret_cast<char*>(&other->connection_type_));
}

std::string NetworkIDProto::GetTypeName() const {
  return "net.nqe.internal.NetworkIDProto";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace internal
}  // namespace nqe
}  // namespace net
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::net::nqe::internal::NetworkIDProto*
Arena::CreateMaybeMessage< ::net::nqe::internal::NetworkIDProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::net::nqe::internal::NetworkIDProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>