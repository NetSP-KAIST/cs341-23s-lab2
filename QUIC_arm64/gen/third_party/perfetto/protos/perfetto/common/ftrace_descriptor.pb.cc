// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/ftrace_descriptor.proto

#include "protos/perfetto/common/ftrace_descriptor.pb.h"

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
PROTOBUF_CONSTEXPR FtraceDescriptor_AtraceCategory::FtraceDescriptor_AtraceCategory(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , description_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct FtraceDescriptor_AtraceCategoryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FtraceDescriptor_AtraceCategoryDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FtraceDescriptor_AtraceCategoryDefaultTypeInternal() {}
  union {
    FtraceDescriptor_AtraceCategory _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FtraceDescriptor_AtraceCategoryDefaultTypeInternal _FtraceDescriptor_AtraceCategory_default_instance_;
PROTOBUF_CONSTEXPR FtraceDescriptor::FtraceDescriptor(
    ::_pbi::ConstantInitialized)
  : atrace_categories_(){}
struct FtraceDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FtraceDescriptorDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FtraceDescriptorDefaultTypeInternal() {}
  union {
    FtraceDescriptor _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FtraceDescriptorDefaultTypeInternal _FtraceDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class FtraceDescriptor_AtraceCategory::_Internal {
 public:
  using HasBits = decltype(std::declval<FtraceDescriptor_AtraceCategory>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_description(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

FtraceDescriptor_AtraceCategory::FtraceDescriptor_AtraceCategory(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.FtraceDescriptor.AtraceCategory)
}
FtraceDescriptor_AtraceCategory::FtraceDescriptor_AtraceCategory(const FtraceDescriptor_AtraceCategory& from)
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
  description_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    description_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_description()) {
    description_.Set(from._internal_description(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.FtraceDescriptor.AtraceCategory)
}

inline void FtraceDescriptor_AtraceCategory::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
description_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  description_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

FtraceDescriptor_AtraceCategory::~FtraceDescriptor_AtraceCategory() {
  // @@protoc_insertion_point(destructor:perfetto.protos.FtraceDescriptor.AtraceCategory)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FtraceDescriptor_AtraceCategory::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
  description_.Destroy();
}

void FtraceDescriptor_AtraceCategory::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FtraceDescriptor_AtraceCategory::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.FtraceDescriptor.AtraceCategory)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      description_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FtraceDescriptor_AtraceCategory::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string description = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_description();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* FtraceDescriptor_AtraceCategory::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.FtraceDescriptor.AtraceCategory)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // optional string description = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_description(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.FtraceDescriptor.AtraceCategory)
  return target;
}

size_t FtraceDescriptor_AtraceCategory::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.FtraceDescriptor.AtraceCategory)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional string description = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_description());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FtraceDescriptor_AtraceCategory::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FtraceDescriptor_AtraceCategory*>(
      &from));
}

void FtraceDescriptor_AtraceCategory::MergeFrom(const FtraceDescriptor_AtraceCategory& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.FtraceDescriptor.AtraceCategory)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_description(from._internal_description());
    }
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FtraceDescriptor_AtraceCategory::CopyFrom(const FtraceDescriptor_AtraceCategory& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.FtraceDescriptor.AtraceCategory)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FtraceDescriptor_AtraceCategory::IsInitialized() const {
  return true;
}

void FtraceDescriptor_AtraceCategory::InternalSwap(FtraceDescriptor_AtraceCategory* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &description_, lhs_arena,
      &other->description_, rhs_arena
  );
}

std::string FtraceDescriptor_AtraceCategory::GetTypeName() const {
  return "perfetto.protos.FtraceDescriptor.AtraceCategory";
}


// ===================================================================

class FtraceDescriptor::_Internal {
 public:
};

FtraceDescriptor::FtraceDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  atrace_categories_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.FtraceDescriptor)
}
FtraceDescriptor::FtraceDescriptor(const FtraceDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      atrace_categories_(from.atrace_categories_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.FtraceDescriptor)
}

inline void FtraceDescriptor::SharedCtor() {
}

FtraceDescriptor::~FtraceDescriptor() {
  // @@protoc_insertion_point(destructor:perfetto.protos.FtraceDescriptor)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FtraceDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FtraceDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FtraceDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.FtraceDescriptor)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  atrace_categories_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FtraceDescriptor::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .perfetto.protos.FtraceDescriptor.AtraceCategory atrace_categories = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_atrace_categories(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FtraceDescriptor::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.FtraceDescriptor)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .perfetto.protos.FtraceDescriptor.AtraceCategory atrace_categories = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_atrace_categories_size()); i < n; i++) {
    const auto& repfield = this->_internal_atrace_categories(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.FtraceDescriptor)
  return target;
}

size_t FtraceDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.FtraceDescriptor)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.FtraceDescriptor.AtraceCategory atrace_categories = 1;
  total_size += 1UL * this->_internal_atrace_categories_size();
  for (const auto& msg : this->atrace_categories_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FtraceDescriptor::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FtraceDescriptor*>(
      &from));
}

void FtraceDescriptor::MergeFrom(const FtraceDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.FtraceDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  atrace_categories_.MergeFrom(from.atrace_categories_);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FtraceDescriptor::CopyFrom(const FtraceDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.FtraceDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FtraceDescriptor::IsInitialized() const {
  return true;
}

void FtraceDescriptor::InternalSwap(FtraceDescriptor* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  atrace_categories_.InternalSwap(&other->atrace_categories_);
}

std::string FtraceDescriptor::GetTypeName() const {
  return "perfetto.protos.FtraceDescriptor";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::FtraceDescriptor_AtraceCategory*
Arena::CreateMaybeMessage< ::perfetto::protos::FtraceDescriptor_AtraceCategory >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::FtraceDescriptor_AtraceCategory >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::FtraceDescriptor*
Arena::CreateMaybeMessage< ::perfetto::protos::FtraceDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::FtraceDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>