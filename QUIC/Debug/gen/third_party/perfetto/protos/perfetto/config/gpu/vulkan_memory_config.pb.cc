// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/gpu/vulkan_memory_config.proto

#include "protos/perfetto/config/gpu/vulkan_memory_config.pb.h"

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
PROTOBUF_CONSTEXPR VulkanMemoryConfig::VulkanMemoryConfig(
    ::_pbi::ConstantInitialized)
  : track_driver_memory_usage_(false)
  , track_device_memory_usage_(false){}
struct VulkanMemoryConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VulkanMemoryConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VulkanMemoryConfigDefaultTypeInternal() {}
  union {
    VulkanMemoryConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VulkanMemoryConfigDefaultTypeInternal _VulkanMemoryConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class VulkanMemoryConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<VulkanMemoryConfig>()._has_bits_);
  static void set_has_track_driver_memory_usage(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_track_device_memory_usage(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

VulkanMemoryConfig::VulkanMemoryConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.VulkanMemoryConfig)
}
VulkanMemoryConfig::VulkanMemoryConfig(const VulkanMemoryConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&track_driver_memory_usage_, &from.track_driver_memory_usage_,
    static_cast<size_t>(reinterpret_cast<char*>(&track_device_memory_usage_) -
    reinterpret_cast<char*>(&track_driver_memory_usage_)) + sizeof(track_device_memory_usage_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.VulkanMemoryConfig)
}

inline void VulkanMemoryConfig::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&track_driver_memory_usage_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&track_device_memory_usage_) -
    reinterpret_cast<char*>(&track_driver_memory_usage_)) + sizeof(track_device_memory_usage_));
}

VulkanMemoryConfig::~VulkanMemoryConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.VulkanMemoryConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void VulkanMemoryConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void VulkanMemoryConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void VulkanMemoryConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.VulkanMemoryConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&track_driver_memory_usage_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&track_device_memory_usage_) -
      reinterpret_cast<char*>(&track_driver_memory_usage_)) + sizeof(track_device_memory_usage_));
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* VulkanMemoryConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool track_driver_memory_usage = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_track_driver_memory_usage(&has_bits);
          track_driver_memory_usage_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool track_device_memory_usage = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_track_device_memory_usage(&has_bits);
          track_device_memory_usage_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* VulkanMemoryConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.VulkanMemoryConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool track_driver_memory_usage = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_track_driver_memory_usage(), target);
  }

  // optional bool track_device_memory_usage = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_track_device_memory_usage(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.VulkanMemoryConfig)
  return target;
}

size_t VulkanMemoryConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.VulkanMemoryConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bool track_driver_memory_usage = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 1;
    }

    // optional bool track_device_memory_usage = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VulkanMemoryConfig::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const VulkanMemoryConfig*>(
      &from));
}

void VulkanMemoryConfig::MergeFrom(const VulkanMemoryConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.VulkanMemoryConfig)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      track_driver_memory_usage_ = from.track_driver_memory_usage_;
    }
    if (cached_has_bits & 0x00000002u) {
      track_device_memory_usage_ = from.track_device_memory_usage_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void VulkanMemoryConfig::CopyFrom(const VulkanMemoryConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.VulkanMemoryConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VulkanMemoryConfig::IsInitialized() const {
  return true;
}

void VulkanMemoryConfig::InternalSwap(VulkanMemoryConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(VulkanMemoryConfig, track_device_memory_usage_)
      + sizeof(VulkanMemoryConfig::track_device_memory_usage_)
      - PROTOBUF_FIELD_OFFSET(VulkanMemoryConfig, track_driver_memory_usage_)>(
          reinterpret_cast<char*>(&track_driver_memory_usage_),
          reinterpret_cast<char*>(&other->track_driver_memory_usage_));
}

std::string VulkanMemoryConfig::GetTypeName() const {
  return "perfetto.protos.VulkanMemoryConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::VulkanMemoryConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::VulkanMemoryConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::VulkanMemoryConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>