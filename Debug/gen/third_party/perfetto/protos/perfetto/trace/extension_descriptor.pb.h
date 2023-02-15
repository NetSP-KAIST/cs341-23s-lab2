// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/extension_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fextension_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fextension_5fdescriptor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "protos/perfetto/common/descriptor.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fextension_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fextension_5fdescriptor_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class ExtensionDescriptor;
struct ExtensionDescriptorDefaultTypeInternal;
extern ExtensionDescriptorDefaultTypeInternal _ExtensionDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ExtensionDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::ExtensionDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class ExtensionDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ExtensionDescriptor) */ {
 public:
  inline ExtensionDescriptor() : ExtensionDescriptor(nullptr) {}
  ~ExtensionDescriptor() override;
  explicit PROTOBUF_CONSTEXPR ExtensionDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ExtensionDescriptor(const ExtensionDescriptor& from);
  ExtensionDescriptor(ExtensionDescriptor&& from) noexcept
    : ExtensionDescriptor() {
    *this = ::std::move(from);
  }

  inline ExtensionDescriptor& operator=(const ExtensionDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExtensionDescriptor& operator=(ExtensionDescriptor&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const ExtensionDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const ExtensionDescriptor* internal_default_instance() {
    return reinterpret_cast<const ExtensionDescriptor*>(
               &_ExtensionDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ExtensionDescriptor& a, ExtensionDescriptor& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ExtensionDescriptor* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ExtensionDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ExtensionDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ExtensionDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ExtensionDescriptor& from);
  void MergeFrom(const ExtensionDescriptor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ExtensionDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ExtensionDescriptor";
  }
  protected:
  explicit ExtensionDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExtensionSetFieldNumber = 1,
  };
  // optional .perfetto.protos.FileDescriptorSet extension_set = 1;
  bool has_extension_set() const;
  private:
  bool _internal_has_extension_set() const;
  public:
  void clear_extension_set();
  const ::perfetto::protos::FileDescriptorSet& extension_set() const;
  PROTOBUF_NODISCARD ::perfetto::protos::FileDescriptorSet* release_extension_set();
  ::perfetto::protos::FileDescriptorSet* mutable_extension_set();
  void set_allocated_extension_set(::perfetto::protos::FileDescriptorSet* extension_set);
  private:
  const ::perfetto::protos::FileDescriptorSet& _internal_extension_set() const;
  ::perfetto::protos::FileDescriptorSet* _internal_mutable_extension_set();
  public:
  void unsafe_arena_set_allocated_extension_set(
      ::perfetto::protos::FileDescriptorSet* extension_set);
  ::perfetto::protos::FileDescriptorSet* unsafe_arena_release_extension_set();

  // @@protoc_insertion_point(class_scope:perfetto.protos.ExtensionDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::perfetto::protos::FileDescriptorSet* extension_set_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fextension_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExtensionDescriptor

// optional .perfetto.protos.FileDescriptorSet extension_set = 1;
inline bool ExtensionDescriptor::_internal_has_extension_set() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || extension_set_ != nullptr);
  return value;
}
inline bool ExtensionDescriptor::has_extension_set() const {
  return _internal_has_extension_set();
}
inline const ::perfetto::protos::FileDescriptorSet& ExtensionDescriptor::_internal_extension_set() const {
  const ::perfetto::protos::FileDescriptorSet* p = extension_set_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::FileDescriptorSet&>(
      ::perfetto::protos::_FileDescriptorSet_default_instance_);
}
inline const ::perfetto::protos::FileDescriptorSet& ExtensionDescriptor::extension_set() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ExtensionDescriptor.extension_set)
  return _internal_extension_set();
}
inline void ExtensionDescriptor::unsafe_arena_set_allocated_extension_set(
    ::perfetto::protos::FileDescriptorSet* extension_set) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(extension_set_);
  }
  extension_set_ = extension_set;
  if (extension_set) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.ExtensionDescriptor.extension_set)
}
inline ::perfetto::protos::FileDescriptorSet* ExtensionDescriptor::release_extension_set() {
  _has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::FileDescriptorSet* temp = extension_set_;
  extension_set_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::FileDescriptorSet* ExtensionDescriptor::unsafe_arena_release_extension_set() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ExtensionDescriptor.extension_set)
  _has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::FileDescriptorSet* temp = extension_set_;
  extension_set_ = nullptr;
  return temp;
}
inline ::perfetto::protos::FileDescriptorSet* ExtensionDescriptor::_internal_mutable_extension_set() {
  _has_bits_[0] |= 0x00000001u;
  if (extension_set_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::FileDescriptorSet>(GetArenaForAllocation());
    extension_set_ = p;
  }
  return extension_set_;
}
inline ::perfetto::protos::FileDescriptorSet* ExtensionDescriptor::mutable_extension_set() {
  ::perfetto::protos::FileDescriptorSet* _msg = _internal_mutable_extension_set();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ExtensionDescriptor.extension_set)
  return _msg;
}
inline void ExtensionDescriptor::set_allocated_extension_set(::perfetto::protos::FileDescriptorSet* extension_set) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(extension_set_);
  }
  if (extension_set) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(extension_set));
    if (message_arena != submessage_arena) {
      extension_set = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, extension_set, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  extension_set_ = extension_set;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ExtensionDescriptor.extension_set)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fextension_5fdescriptor_2eproto
