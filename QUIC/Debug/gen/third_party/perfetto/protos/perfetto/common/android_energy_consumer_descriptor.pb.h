// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/android_energy_consumer_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fandroid_5fenergy_5fconsumer_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fandroid_5fenergy_5fconsumer_5fdescriptor_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fcommon_2fandroid_5fenergy_5fconsumer_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fcommon_2fandroid_5fenergy_5fconsumer_5fdescriptor_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class AndroidEnergyConsumer;
struct AndroidEnergyConsumerDefaultTypeInternal;
extern AndroidEnergyConsumerDefaultTypeInternal _AndroidEnergyConsumer_default_instance_;
class AndroidEnergyConsumerDescriptor;
struct AndroidEnergyConsumerDescriptorDefaultTypeInternal;
extern AndroidEnergyConsumerDescriptorDefaultTypeInternal _AndroidEnergyConsumerDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::AndroidEnergyConsumer* Arena::CreateMaybeMessage<::perfetto::protos::AndroidEnergyConsumer>(Arena*);
template<> ::perfetto::protos::AndroidEnergyConsumerDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::AndroidEnergyConsumerDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class AndroidEnergyConsumer final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidEnergyConsumer) */ {
 public:
  inline AndroidEnergyConsumer() : AndroidEnergyConsumer(nullptr) {}
  ~AndroidEnergyConsumer() override;
  explicit PROTOBUF_CONSTEXPR AndroidEnergyConsumer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidEnergyConsumer(const AndroidEnergyConsumer& from);
  AndroidEnergyConsumer(AndroidEnergyConsumer&& from) noexcept
    : AndroidEnergyConsumer() {
    *this = ::std::move(from);
  }

  inline AndroidEnergyConsumer& operator=(const AndroidEnergyConsumer& from) {
    CopyFrom(from);
    return *this;
  }
  inline AndroidEnergyConsumer& operator=(AndroidEnergyConsumer&& from) noexcept {
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

  static const AndroidEnergyConsumer& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidEnergyConsumer* internal_default_instance() {
    return reinterpret_cast<const AndroidEnergyConsumer*>(
               &_AndroidEnergyConsumer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AndroidEnergyConsumer& a, AndroidEnergyConsumer& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(AndroidEnergyConsumer* other) {
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
  void UnsafeArenaSwap(AndroidEnergyConsumer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidEnergyConsumer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AndroidEnergyConsumer>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidEnergyConsumer& from);
  void MergeFrom(const AndroidEnergyConsumer& from);
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
  void InternalSwap(AndroidEnergyConsumer* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidEnergyConsumer";
  }
  protected:
  explicit AndroidEnergyConsumer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTypeFieldNumber = 3,
    kNameFieldNumber = 4,
    kEnergyConsumerIdFieldNumber = 1,
    kOrdinalFieldNumber = 2,
  };
  // optional string type = 3;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  const std::string& type() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_type(ArgT0&& arg0, ArgT... args);
  std::string* mutable_type();
  PROTOBUF_NODISCARD std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

  // optional string name = 4;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional int32 energy_consumer_id = 1;
  bool has_energy_consumer_id() const;
  private:
  bool _internal_has_energy_consumer_id() const;
  public:
  void clear_energy_consumer_id();
  int32_t energy_consumer_id() const;
  void set_energy_consumer_id(int32_t value);
  private:
  int32_t _internal_energy_consumer_id() const;
  void _internal_set_energy_consumer_id(int32_t value);
  public:

  // optional int32 ordinal = 2;
  bool has_ordinal() const;
  private:
  bool _internal_has_ordinal() const;
  public:
  void clear_ordinal();
  int32_t ordinal() const;
  void set_ordinal(int32_t value);
  private:
  int32_t _internal_ordinal() const;
  void _internal_set_ordinal(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidEnergyConsumer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int32_t energy_consumer_id_;
  int32_t ordinal_;
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2fandroid_5fenergy_5fconsumer_5fdescriptor_2eproto;
};
// -------------------------------------------------------------------

class AndroidEnergyConsumerDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidEnergyConsumerDescriptor) */ {
 public:
  inline AndroidEnergyConsumerDescriptor() : AndroidEnergyConsumerDescriptor(nullptr) {}
  ~AndroidEnergyConsumerDescriptor() override;
  explicit PROTOBUF_CONSTEXPR AndroidEnergyConsumerDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidEnergyConsumerDescriptor(const AndroidEnergyConsumerDescriptor& from);
  AndroidEnergyConsumerDescriptor(AndroidEnergyConsumerDescriptor&& from) noexcept
    : AndroidEnergyConsumerDescriptor() {
    *this = ::std::move(from);
  }

  inline AndroidEnergyConsumerDescriptor& operator=(const AndroidEnergyConsumerDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline AndroidEnergyConsumerDescriptor& operator=(AndroidEnergyConsumerDescriptor&& from) noexcept {
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

  static const AndroidEnergyConsumerDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidEnergyConsumerDescriptor* internal_default_instance() {
    return reinterpret_cast<const AndroidEnergyConsumerDescriptor*>(
               &_AndroidEnergyConsumerDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(AndroidEnergyConsumerDescriptor& a, AndroidEnergyConsumerDescriptor& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(AndroidEnergyConsumerDescriptor* other) {
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
  void UnsafeArenaSwap(AndroidEnergyConsumerDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidEnergyConsumerDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AndroidEnergyConsumerDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidEnergyConsumerDescriptor& from);
  void MergeFrom(const AndroidEnergyConsumerDescriptor& from);
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
  void InternalSwap(AndroidEnergyConsumerDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidEnergyConsumerDescriptor";
  }
  protected:
  explicit AndroidEnergyConsumerDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kEnergyConsumersFieldNumber = 1,
  };
  // repeated .perfetto.protos.AndroidEnergyConsumer energy_consumers = 1;
  int energy_consumers_size() const;
  private:
  int _internal_energy_consumers_size() const;
  public:
  void clear_energy_consumers();
  ::perfetto::protos::AndroidEnergyConsumer* mutable_energy_consumers(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyConsumer >*
      mutable_energy_consumers();
  private:
  const ::perfetto::protos::AndroidEnergyConsumer& _internal_energy_consumers(int index) const;
  ::perfetto::protos::AndroidEnergyConsumer* _internal_add_energy_consumers();
  public:
  const ::perfetto::protos::AndroidEnergyConsumer& energy_consumers(int index) const;
  ::perfetto::protos::AndroidEnergyConsumer* add_energy_consumers();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyConsumer >&
      energy_consumers() const;

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidEnergyConsumerDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyConsumer > energy_consumers_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2fandroid_5fenergy_5fconsumer_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AndroidEnergyConsumer

// optional int32 energy_consumer_id = 1;
inline bool AndroidEnergyConsumer::_internal_has_energy_consumer_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool AndroidEnergyConsumer::has_energy_consumer_id() const {
  return _internal_has_energy_consumer_id();
}
inline void AndroidEnergyConsumer::clear_energy_consumer_id() {
  energy_consumer_id_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t AndroidEnergyConsumer::_internal_energy_consumer_id() const {
  return energy_consumer_id_;
}
inline int32_t AndroidEnergyConsumer::energy_consumer_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyConsumer.energy_consumer_id)
  return _internal_energy_consumer_id();
}
inline void AndroidEnergyConsumer::_internal_set_energy_consumer_id(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  energy_consumer_id_ = value;
}
inline void AndroidEnergyConsumer::set_energy_consumer_id(int32_t value) {
  _internal_set_energy_consumer_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyConsumer.energy_consumer_id)
}

// optional int32 ordinal = 2;
inline bool AndroidEnergyConsumer::_internal_has_ordinal() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool AndroidEnergyConsumer::has_ordinal() const {
  return _internal_has_ordinal();
}
inline void AndroidEnergyConsumer::clear_ordinal() {
  ordinal_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline int32_t AndroidEnergyConsumer::_internal_ordinal() const {
  return ordinal_;
}
inline int32_t AndroidEnergyConsumer::ordinal() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyConsumer.ordinal)
  return _internal_ordinal();
}
inline void AndroidEnergyConsumer::_internal_set_ordinal(int32_t value) {
  _has_bits_[0] |= 0x00000008u;
  ordinal_ = value;
}
inline void AndroidEnergyConsumer::set_ordinal(int32_t value) {
  _internal_set_ordinal(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyConsumer.ordinal)
}

// optional string type = 3;
inline bool AndroidEnergyConsumer::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AndroidEnergyConsumer::has_type() const {
  return _internal_has_type();
}
inline void AndroidEnergyConsumer::clear_type() {
  type_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& AndroidEnergyConsumer::type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyConsumer.type)
  return _internal_type();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AndroidEnergyConsumer::set_type(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 type_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyConsumer.type)
}
inline std::string* AndroidEnergyConsumer::mutable_type() {
  std::string* _s = _internal_mutable_type();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidEnergyConsumer.type)
  return _s;
}
inline const std::string& AndroidEnergyConsumer::_internal_type() const {
  return type_.Get();
}
inline void AndroidEnergyConsumer::_internal_set_type(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  type_.Set(value, GetArenaForAllocation());
}
inline std::string* AndroidEnergyConsumer::_internal_mutable_type() {
  _has_bits_[0] |= 0x00000001u;
  return type_.Mutable(GetArenaForAllocation());
}
inline std::string* AndroidEnergyConsumer::release_type() {
  // @@protoc_insertion_point(field_release:perfetto.protos.AndroidEnergyConsumer.type)
  if (!_internal_has_type()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = type_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (type_.IsDefault()) {
    type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void AndroidEnergyConsumer::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  type_.SetAllocated(type, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (type_.IsDefault()) {
    type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.AndroidEnergyConsumer.type)
}

// optional string name = 4;
inline bool AndroidEnergyConsumer::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool AndroidEnergyConsumer::has_name() const {
  return _internal_has_name();
}
inline void AndroidEnergyConsumer::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& AndroidEnergyConsumer::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyConsumer.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AndroidEnergyConsumer::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidEnergyConsumer.name)
}
inline std::string* AndroidEnergyConsumer::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidEnergyConsumer.name)
  return _s;
}
inline const std::string& AndroidEnergyConsumer::_internal_name() const {
  return name_.Get();
}
inline void AndroidEnergyConsumer::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* AndroidEnergyConsumer::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000002u;
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* AndroidEnergyConsumer::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.AndroidEnergyConsumer.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void AndroidEnergyConsumer::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.AndroidEnergyConsumer.name)
}

// -------------------------------------------------------------------

// AndroidEnergyConsumerDescriptor

// repeated .perfetto.protos.AndroidEnergyConsumer energy_consumers = 1;
inline int AndroidEnergyConsumerDescriptor::_internal_energy_consumers_size() const {
  return energy_consumers_.size();
}
inline int AndroidEnergyConsumerDescriptor::energy_consumers_size() const {
  return _internal_energy_consumers_size();
}
inline void AndroidEnergyConsumerDescriptor::clear_energy_consumers() {
  energy_consumers_.Clear();
}
inline ::perfetto::protos::AndroidEnergyConsumer* AndroidEnergyConsumerDescriptor::mutable_energy_consumers(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidEnergyConsumerDescriptor.energy_consumers)
  return energy_consumers_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyConsumer >*
AndroidEnergyConsumerDescriptor::mutable_energy_consumers() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.AndroidEnergyConsumerDescriptor.energy_consumers)
  return &energy_consumers_;
}
inline const ::perfetto::protos::AndroidEnergyConsumer& AndroidEnergyConsumerDescriptor::_internal_energy_consumers(int index) const {
  return energy_consumers_.Get(index);
}
inline const ::perfetto::protos::AndroidEnergyConsumer& AndroidEnergyConsumerDescriptor::energy_consumers(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidEnergyConsumerDescriptor.energy_consumers)
  return _internal_energy_consumers(index);
}
inline ::perfetto::protos::AndroidEnergyConsumer* AndroidEnergyConsumerDescriptor::_internal_add_energy_consumers() {
  return energy_consumers_.Add();
}
inline ::perfetto::protos::AndroidEnergyConsumer* AndroidEnergyConsumerDescriptor::add_energy_consumers() {
  ::perfetto::protos::AndroidEnergyConsumer* _add = _internal_add_energy_consumers();
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidEnergyConsumerDescriptor.energy_consumers)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::AndroidEnergyConsumer >&
AndroidEnergyConsumerDescriptor::energy_consumers() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.AndroidEnergyConsumerDescriptor.energy_consumers)
  return energy_consumers_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fandroid_5fenergy_5fconsumer_5fdescriptor_2eproto