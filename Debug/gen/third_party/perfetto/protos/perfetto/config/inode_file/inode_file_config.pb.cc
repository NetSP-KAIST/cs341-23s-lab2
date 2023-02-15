// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/inode_file/inode_file_config.proto

#include "protos/perfetto/config/inode_file/inode_file_config.pb.h"

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
PROTOBUF_CONSTEXPR InodeFileConfig_MountPointMappingEntry::InodeFileConfig_MountPointMappingEntry(
    ::_pbi::ConstantInitialized)
  : scan_roots_()
  , mountpoint_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct InodeFileConfig_MountPointMappingEntryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InodeFileConfig_MountPointMappingEntryDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~InodeFileConfig_MountPointMappingEntryDefaultTypeInternal() {}
  union {
    InodeFileConfig_MountPointMappingEntry _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InodeFileConfig_MountPointMappingEntryDefaultTypeInternal _InodeFileConfig_MountPointMappingEntry_default_instance_;
PROTOBUF_CONSTEXPR InodeFileConfig::InodeFileConfig(
    ::_pbi::ConstantInitialized)
  : scan_mount_points_()
  , mount_point_mapping_()
  , scan_interval_ms_(0u)
  , scan_delay_ms_(0u)
  , scan_batch_size_(0u)
  , do_not_scan_(false){}
struct InodeFileConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InodeFileConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~InodeFileConfigDefaultTypeInternal() {}
  union {
    InodeFileConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InodeFileConfigDefaultTypeInternal _InodeFileConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class InodeFileConfig_MountPointMappingEntry::_Internal {
 public:
  using HasBits = decltype(std::declval<InodeFileConfig_MountPointMappingEntry>()._has_bits_);
  static void set_has_mountpoint(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

InodeFileConfig_MountPointMappingEntry::InodeFileConfig_MountPointMappingEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  scan_roots_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
}
InodeFileConfig_MountPointMappingEntry::InodeFileConfig_MountPointMappingEntry(const InodeFileConfig_MountPointMappingEntry& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      scan_roots_(from.scan_roots_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  mountpoint_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    mountpoint_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_mountpoint()) {
    mountpoint_.Set(from._internal_mountpoint(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
}

inline void InodeFileConfig_MountPointMappingEntry::SharedCtor() {
mountpoint_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  mountpoint_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

InodeFileConfig_MountPointMappingEntry::~InodeFileConfig_MountPointMappingEntry() {
  // @@protoc_insertion_point(destructor:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InodeFileConfig_MountPointMappingEntry::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  mountpoint_.Destroy();
}

void InodeFileConfig_MountPointMappingEntry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void InodeFileConfig_MountPointMappingEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scan_roots_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    mountpoint_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* InodeFileConfig_MountPointMappingEntry::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string mountpoint = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_mountpoint();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string scan_roots = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_scan_roots();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* InodeFileConfig_MountPointMappingEntry::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string mountpoint = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_mountpoint(), target);
  }

  // repeated string scan_roots = 2;
  for (int i = 0, n = this->_internal_scan_roots_size(); i < n; i++) {
    const auto& s = this->_internal_scan_roots(i);
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  return target;
}

size_t InodeFileConfig_MountPointMappingEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string scan_roots = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(scan_roots_.size());
  for (int i = 0, n = scan_roots_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      scan_roots_.Get(i));
  }

  // optional string mountpoint = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_mountpoint());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void InodeFileConfig_MountPointMappingEntry::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const InodeFileConfig_MountPointMappingEntry*>(
      &from));
}

void InodeFileConfig_MountPointMappingEntry::MergeFrom(const InodeFileConfig_MountPointMappingEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  scan_roots_.MergeFrom(from.scan_roots_);
  if (from._internal_has_mountpoint()) {
    _internal_set_mountpoint(from._internal_mountpoint());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void InodeFileConfig_MountPointMappingEntry::CopyFrom(const InodeFileConfig_MountPointMappingEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.InodeFileConfig.MountPointMappingEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InodeFileConfig_MountPointMappingEntry::IsInitialized() const {
  return true;
}

void InodeFileConfig_MountPointMappingEntry::InternalSwap(InodeFileConfig_MountPointMappingEntry* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  scan_roots_.InternalSwap(&other->scan_roots_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &mountpoint_, lhs_arena,
      &other->mountpoint_, rhs_arena
  );
}

std::string InodeFileConfig_MountPointMappingEntry::GetTypeName() const {
  return "perfetto.protos.InodeFileConfig.MountPointMappingEntry";
}


// ===================================================================

class InodeFileConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<InodeFileConfig>()._has_bits_);
  static void set_has_scan_interval_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_scan_delay_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_scan_batch_size(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_do_not_scan(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

InodeFileConfig::InodeFileConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  scan_mount_points_(arena),
  mount_point_mapping_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.InodeFileConfig)
}
InodeFileConfig::InodeFileConfig(const InodeFileConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      scan_mount_points_(from.scan_mount_points_),
      mount_point_mapping_(from.mount_point_mapping_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&scan_interval_ms_, &from.scan_interval_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&do_not_scan_) -
    reinterpret_cast<char*>(&scan_interval_ms_)) + sizeof(do_not_scan_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.InodeFileConfig)
}

inline void InodeFileConfig::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&scan_interval_ms_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&do_not_scan_) -
    reinterpret_cast<char*>(&scan_interval_ms_)) + sizeof(do_not_scan_));
}

InodeFileConfig::~InodeFileConfig() {
  // @@protoc_insertion_point(destructor:perfetto.protos.InodeFileConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InodeFileConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void InodeFileConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void InodeFileConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.InodeFileConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  scan_mount_points_.Clear();
  mount_point_mapping_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&scan_interval_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&do_not_scan_) -
        reinterpret_cast<char*>(&scan_interval_ms_)) + sizeof(do_not_scan_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* InodeFileConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 scan_interval_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_scan_interval_ms(&has_bits);
          scan_interval_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 scan_delay_ms = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_scan_delay_ms(&has_bits);
          scan_delay_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 scan_batch_size = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_scan_batch_size(&has_bits);
          scan_batch_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool do_not_scan = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_do_not_scan(&has_bits);
          do_not_scan_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string scan_mount_points = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_scan_mount_points();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_mount_point_mapping(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
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

uint8_t* InodeFileConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.InodeFileConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 scan_interval_ms = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_scan_interval_ms(), target);
  }

  // optional uint32 scan_delay_ms = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_scan_delay_ms(), target);
  }

  // optional uint32 scan_batch_size = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_scan_batch_size(), target);
  }

  // optional bool do_not_scan = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_do_not_scan(), target);
  }

  // repeated string scan_mount_points = 5;
  for (int i = 0, n = this->_internal_scan_mount_points_size(); i < n; i++) {
    const auto& s = this->_internal_scan_mount_points(i);
    target = stream->WriteString(5, s, target);
  }

  // repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_mount_point_mapping_size()); i < n; i++) {
    const auto& repfield = this->_internal_mount_point_mapping(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(6, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.InodeFileConfig)
  return target;
}

size_t InodeFileConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.InodeFileConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string scan_mount_points = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(scan_mount_points_.size());
  for (int i = 0, n = scan_mount_points_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      scan_mount_points_.Get(i));
  }

  // repeated .perfetto.protos.InodeFileConfig.MountPointMappingEntry mount_point_mapping = 6;
  total_size += 1UL * this->_internal_mount_point_mapping_size();
  for (const auto& msg : this->mount_point_mapping_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional uint32 scan_interval_ms = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_scan_interval_ms());
    }

    // optional uint32 scan_delay_ms = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_scan_delay_ms());
    }

    // optional uint32 scan_batch_size = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_scan_batch_size());
    }

    // optional bool do_not_scan = 4;
    if (cached_has_bits & 0x00000008u) {
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

void InodeFileConfig::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const InodeFileConfig*>(
      &from));
}

void InodeFileConfig::MergeFrom(const InodeFileConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.InodeFileConfig)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  scan_mount_points_.MergeFrom(from.scan_mount_points_);
  mount_point_mapping_.MergeFrom(from.mount_point_mapping_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      scan_interval_ms_ = from.scan_interval_ms_;
    }
    if (cached_has_bits & 0x00000002u) {
      scan_delay_ms_ = from.scan_delay_ms_;
    }
    if (cached_has_bits & 0x00000004u) {
      scan_batch_size_ = from.scan_batch_size_;
    }
    if (cached_has_bits & 0x00000008u) {
      do_not_scan_ = from.do_not_scan_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void InodeFileConfig::CopyFrom(const InodeFileConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.InodeFileConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InodeFileConfig::IsInitialized() const {
  return true;
}

void InodeFileConfig::InternalSwap(InodeFileConfig* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  scan_mount_points_.InternalSwap(&other->scan_mount_points_);
  mount_point_mapping_.InternalSwap(&other->mount_point_mapping_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(InodeFileConfig, do_not_scan_)
      + sizeof(InodeFileConfig::do_not_scan_)
      - PROTOBUF_FIELD_OFFSET(InodeFileConfig, scan_interval_ms_)>(
          reinterpret_cast<char*>(&scan_interval_ms_),
          reinterpret_cast<char*>(&other->scan_interval_ms_));
}

std::string InodeFileConfig::GetTypeName() const {
  return "perfetto.protos.InodeFileConfig";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::InodeFileConfig_MountPointMappingEntry*
Arena::CreateMaybeMessage< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::InodeFileConfig_MountPointMappingEntry >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::InodeFileConfig*
Arena::CreateMaybeMessage< ::perfetto::protos::InodeFileConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::InodeFileConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
