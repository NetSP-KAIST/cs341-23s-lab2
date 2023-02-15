// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/workqueue.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class WorkqueueActivateWorkFtraceEvent;
struct WorkqueueActivateWorkFtraceEventDefaultTypeInternal;
extern WorkqueueActivateWorkFtraceEventDefaultTypeInternal _WorkqueueActivateWorkFtraceEvent_default_instance_;
class WorkqueueExecuteEndFtraceEvent;
struct WorkqueueExecuteEndFtraceEventDefaultTypeInternal;
extern WorkqueueExecuteEndFtraceEventDefaultTypeInternal _WorkqueueExecuteEndFtraceEvent_default_instance_;
class WorkqueueExecuteStartFtraceEvent;
struct WorkqueueExecuteStartFtraceEventDefaultTypeInternal;
extern WorkqueueExecuteStartFtraceEventDefaultTypeInternal _WorkqueueExecuteStartFtraceEvent_default_instance_;
class WorkqueueQueueWorkFtraceEvent;
struct WorkqueueQueueWorkFtraceEventDefaultTypeInternal;
extern WorkqueueQueueWorkFtraceEventDefaultTypeInternal _WorkqueueQueueWorkFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::WorkqueueActivateWorkFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueActivateWorkFtraceEvent>(Arena*);
template<> ::perfetto::protos::WorkqueueExecuteEndFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueExecuteEndFtraceEvent>(Arena*);
template<> ::perfetto::protos::WorkqueueExecuteStartFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueExecuteStartFtraceEvent>(Arena*);
template<> ::perfetto::protos::WorkqueueQueueWorkFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueQueueWorkFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class WorkqueueActivateWorkFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueActivateWorkFtraceEvent) */ {
 public:
  inline WorkqueueActivateWorkFtraceEvent() : WorkqueueActivateWorkFtraceEvent(nullptr) {}
  ~WorkqueueActivateWorkFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR WorkqueueActivateWorkFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WorkqueueActivateWorkFtraceEvent(const WorkqueueActivateWorkFtraceEvent& from);
  WorkqueueActivateWorkFtraceEvent(WorkqueueActivateWorkFtraceEvent&& from) noexcept
    : WorkqueueActivateWorkFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueActivateWorkFtraceEvent& operator=(const WorkqueueActivateWorkFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueActivateWorkFtraceEvent& operator=(WorkqueueActivateWorkFtraceEvent&& from) noexcept {
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

  static const WorkqueueActivateWorkFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const WorkqueueActivateWorkFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueActivateWorkFtraceEvent*>(
               &_WorkqueueActivateWorkFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WorkqueueActivateWorkFtraceEvent& a, WorkqueueActivateWorkFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(WorkqueueActivateWorkFtraceEvent* other) {
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
  void UnsafeArenaSwap(WorkqueueActivateWorkFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WorkqueueActivateWorkFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WorkqueueActivateWorkFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const WorkqueueActivateWorkFtraceEvent& from);
  void MergeFrom(const WorkqueueActivateWorkFtraceEvent& from);
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
  void InternalSwap(WorkqueueActivateWorkFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueActivateWorkFtraceEvent";
  }
  protected:
  explicit WorkqueueActivateWorkFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  private:
  bool _internal_has_work() const;
  public:
  void clear_work();
  uint64_t work() const;
  void set_work(uint64_t value);
  private:
  uint64_t _internal_work() const;
  void _internal_set_work(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueActivateWorkFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint64_t work_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// -------------------------------------------------------------------

class WorkqueueExecuteEndFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueExecuteEndFtraceEvent) */ {
 public:
  inline WorkqueueExecuteEndFtraceEvent() : WorkqueueExecuteEndFtraceEvent(nullptr) {}
  ~WorkqueueExecuteEndFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR WorkqueueExecuteEndFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WorkqueueExecuteEndFtraceEvent(const WorkqueueExecuteEndFtraceEvent& from);
  WorkqueueExecuteEndFtraceEvent(WorkqueueExecuteEndFtraceEvent&& from) noexcept
    : WorkqueueExecuteEndFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueExecuteEndFtraceEvent& operator=(const WorkqueueExecuteEndFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueExecuteEndFtraceEvent& operator=(WorkqueueExecuteEndFtraceEvent&& from) noexcept {
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

  static const WorkqueueExecuteEndFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const WorkqueueExecuteEndFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueExecuteEndFtraceEvent*>(
               &_WorkqueueExecuteEndFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WorkqueueExecuteEndFtraceEvent& a, WorkqueueExecuteEndFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(WorkqueueExecuteEndFtraceEvent* other) {
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
  void UnsafeArenaSwap(WorkqueueExecuteEndFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WorkqueueExecuteEndFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WorkqueueExecuteEndFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const WorkqueueExecuteEndFtraceEvent& from);
  void MergeFrom(const WorkqueueExecuteEndFtraceEvent& from);
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
  void InternalSwap(WorkqueueExecuteEndFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueExecuteEndFtraceEvent";
  }
  protected:
  explicit WorkqueueExecuteEndFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  private:
  bool _internal_has_work() const;
  public:
  void clear_work();
  uint64_t work() const;
  void set_work(uint64_t value);
  private:
  uint64_t _internal_work() const;
  void _internal_set_work(uint64_t value);
  public:

  // optional uint64 function = 2;
  bool has_function() const;
  private:
  bool _internal_has_function() const;
  public:
  void clear_function();
  uint64_t function() const;
  void set_function(uint64_t value);
  private:
  uint64_t _internal_function() const;
  void _internal_set_function(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueExecuteEndFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint64_t work_;
  uint64_t function_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// -------------------------------------------------------------------

class WorkqueueExecuteStartFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueExecuteStartFtraceEvent) */ {
 public:
  inline WorkqueueExecuteStartFtraceEvent() : WorkqueueExecuteStartFtraceEvent(nullptr) {}
  ~WorkqueueExecuteStartFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR WorkqueueExecuteStartFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WorkqueueExecuteStartFtraceEvent(const WorkqueueExecuteStartFtraceEvent& from);
  WorkqueueExecuteStartFtraceEvent(WorkqueueExecuteStartFtraceEvent&& from) noexcept
    : WorkqueueExecuteStartFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueExecuteStartFtraceEvent& operator=(const WorkqueueExecuteStartFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueExecuteStartFtraceEvent& operator=(WorkqueueExecuteStartFtraceEvent&& from) noexcept {
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

  static const WorkqueueExecuteStartFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const WorkqueueExecuteStartFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueExecuteStartFtraceEvent*>(
               &_WorkqueueExecuteStartFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(WorkqueueExecuteStartFtraceEvent& a, WorkqueueExecuteStartFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(WorkqueueExecuteStartFtraceEvent* other) {
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
  void UnsafeArenaSwap(WorkqueueExecuteStartFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WorkqueueExecuteStartFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WorkqueueExecuteStartFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const WorkqueueExecuteStartFtraceEvent& from);
  void MergeFrom(const WorkqueueExecuteStartFtraceEvent& from);
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
  void InternalSwap(WorkqueueExecuteStartFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueExecuteStartFtraceEvent";
  }
  protected:
  explicit WorkqueueExecuteStartFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  private:
  bool _internal_has_work() const;
  public:
  void clear_work();
  uint64_t work() const;
  void set_work(uint64_t value);
  private:
  uint64_t _internal_work() const;
  void _internal_set_work(uint64_t value);
  public:

  // optional uint64 function = 2;
  bool has_function() const;
  private:
  bool _internal_has_function() const;
  public:
  void clear_function();
  uint64_t function() const;
  void set_function(uint64_t value);
  private:
  uint64_t _internal_function() const;
  void _internal_set_function(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueExecuteStartFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint64_t work_;
  uint64_t function_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// -------------------------------------------------------------------

class WorkqueueQueueWorkFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueQueueWorkFtraceEvent) */ {
 public:
  inline WorkqueueQueueWorkFtraceEvent() : WorkqueueQueueWorkFtraceEvent(nullptr) {}
  ~WorkqueueQueueWorkFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR WorkqueueQueueWorkFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WorkqueueQueueWorkFtraceEvent(const WorkqueueQueueWorkFtraceEvent& from);
  WorkqueueQueueWorkFtraceEvent(WorkqueueQueueWorkFtraceEvent&& from) noexcept
    : WorkqueueQueueWorkFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueQueueWorkFtraceEvent& operator=(const WorkqueueQueueWorkFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueQueueWorkFtraceEvent& operator=(WorkqueueQueueWorkFtraceEvent&& from) noexcept {
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

  static const WorkqueueQueueWorkFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const WorkqueueQueueWorkFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueQueueWorkFtraceEvent*>(
               &_WorkqueueQueueWorkFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(WorkqueueQueueWorkFtraceEvent& a, WorkqueueQueueWorkFtraceEvent& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(WorkqueueQueueWorkFtraceEvent* other) {
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
  void UnsafeArenaSwap(WorkqueueQueueWorkFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WorkqueueQueueWorkFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WorkqueueQueueWorkFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const WorkqueueQueueWorkFtraceEvent& from);
  void MergeFrom(const WorkqueueQueueWorkFtraceEvent& from);
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
  void InternalSwap(WorkqueueQueueWorkFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueQueueWorkFtraceEvent";
  }
  protected:
  explicit WorkqueueQueueWorkFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
    kWorkqueueFieldNumber = 3,
    kReqCpuFieldNumber = 4,
    kCpuFieldNumber = 5,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  private:
  bool _internal_has_work() const;
  public:
  void clear_work();
  uint64_t work() const;
  void set_work(uint64_t value);
  private:
  uint64_t _internal_work() const;
  void _internal_set_work(uint64_t value);
  public:

  // optional uint64 function = 2;
  bool has_function() const;
  private:
  bool _internal_has_function() const;
  public:
  void clear_function();
  uint64_t function() const;
  void set_function(uint64_t value);
  private:
  uint64_t _internal_function() const;
  void _internal_set_function(uint64_t value);
  public:

  // optional uint64 workqueue = 3;
  bool has_workqueue() const;
  private:
  bool _internal_has_workqueue() const;
  public:
  void clear_workqueue();
  uint64_t workqueue() const;
  void set_workqueue(uint64_t value);
  private:
  uint64_t _internal_workqueue() const;
  void _internal_set_workqueue(uint64_t value);
  public:

  // optional uint32 req_cpu = 4;
  bool has_req_cpu() const;
  private:
  bool _internal_has_req_cpu() const;
  public:
  void clear_req_cpu();
  uint32_t req_cpu() const;
  void set_req_cpu(uint32_t value);
  private:
  uint32_t _internal_req_cpu() const;
  void _internal_set_req_cpu(uint32_t value);
  public:

  // optional uint32 cpu = 5;
  bool has_cpu() const;
  private:
  bool _internal_has_cpu() const;
  public:
  void clear_cpu();
  uint32_t cpu() const;
  void set_cpu(uint32_t value);
  private:
  uint32_t _internal_cpu() const;
  void _internal_set_cpu(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueQueueWorkFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint64_t work_;
  uint64_t function_;
  uint64_t workqueue_;
  uint32_t req_cpu_;
  uint32_t cpu_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WorkqueueActivateWorkFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueActivateWorkFtraceEvent::_internal_has_work() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool WorkqueueActivateWorkFtraceEvent::has_work() const {
  return _internal_has_work();
}
inline void WorkqueueActivateWorkFtraceEvent::clear_work() {
  work_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000001u;
}
inline uint64_t WorkqueueActivateWorkFtraceEvent::_internal_work() const {
  return work_;
}
inline uint64_t WorkqueueActivateWorkFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueActivateWorkFtraceEvent.work)
  return _internal_work();
}
inline void WorkqueueActivateWorkFtraceEvent::_internal_set_work(uint64_t value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
}
inline void WorkqueueActivateWorkFtraceEvent::set_work(uint64_t value) {
  _internal_set_work(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueActivateWorkFtraceEvent.work)
}

// -------------------------------------------------------------------

// WorkqueueExecuteEndFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueExecuteEndFtraceEvent::_internal_has_work() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool WorkqueueExecuteEndFtraceEvent::has_work() const {
  return _internal_has_work();
}
inline void WorkqueueExecuteEndFtraceEvent::clear_work() {
  work_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000001u;
}
inline uint64_t WorkqueueExecuteEndFtraceEvent::_internal_work() const {
  return work_;
}
inline uint64_t WorkqueueExecuteEndFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueExecuteEndFtraceEvent.work)
  return _internal_work();
}
inline void WorkqueueExecuteEndFtraceEvent::_internal_set_work(uint64_t value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
}
inline void WorkqueueExecuteEndFtraceEvent::set_work(uint64_t value) {
  _internal_set_work(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueExecuteEndFtraceEvent.work)
}

// optional uint64 function = 2;
inline bool WorkqueueExecuteEndFtraceEvent::_internal_has_function() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool WorkqueueExecuteEndFtraceEvent::has_function() const {
  return _internal_has_function();
}
inline void WorkqueueExecuteEndFtraceEvent::clear_function() {
  function_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000002u;
}
inline uint64_t WorkqueueExecuteEndFtraceEvent::_internal_function() const {
  return function_;
}
inline uint64_t WorkqueueExecuteEndFtraceEvent::function() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueExecuteEndFtraceEvent.function)
  return _internal_function();
}
inline void WorkqueueExecuteEndFtraceEvent::_internal_set_function(uint64_t value) {
  _has_bits_[0] |= 0x00000002u;
  function_ = value;
}
inline void WorkqueueExecuteEndFtraceEvent::set_function(uint64_t value) {
  _internal_set_function(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueExecuteEndFtraceEvent.function)
}

// -------------------------------------------------------------------

// WorkqueueExecuteStartFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueExecuteStartFtraceEvent::_internal_has_work() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool WorkqueueExecuteStartFtraceEvent::has_work() const {
  return _internal_has_work();
}
inline void WorkqueueExecuteStartFtraceEvent::clear_work() {
  work_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000001u;
}
inline uint64_t WorkqueueExecuteStartFtraceEvent::_internal_work() const {
  return work_;
}
inline uint64_t WorkqueueExecuteStartFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueExecuteStartFtraceEvent.work)
  return _internal_work();
}
inline void WorkqueueExecuteStartFtraceEvent::_internal_set_work(uint64_t value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
}
inline void WorkqueueExecuteStartFtraceEvent::set_work(uint64_t value) {
  _internal_set_work(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueExecuteStartFtraceEvent.work)
}

// optional uint64 function = 2;
inline bool WorkqueueExecuteStartFtraceEvent::_internal_has_function() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool WorkqueueExecuteStartFtraceEvent::has_function() const {
  return _internal_has_function();
}
inline void WorkqueueExecuteStartFtraceEvent::clear_function() {
  function_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000002u;
}
inline uint64_t WorkqueueExecuteStartFtraceEvent::_internal_function() const {
  return function_;
}
inline uint64_t WorkqueueExecuteStartFtraceEvent::function() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueExecuteStartFtraceEvent.function)
  return _internal_function();
}
inline void WorkqueueExecuteStartFtraceEvent::_internal_set_function(uint64_t value) {
  _has_bits_[0] |= 0x00000002u;
  function_ = value;
}
inline void WorkqueueExecuteStartFtraceEvent::set_function(uint64_t value) {
  _internal_set_function(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueExecuteStartFtraceEvent.function)
}

// -------------------------------------------------------------------

// WorkqueueQueueWorkFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueQueueWorkFtraceEvent::_internal_has_work() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool WorkqueueQueueWorkFtraceEvent::has_work() const {
  return _internal_has_work();
}
inline void WorkqueueQueueWorkFtraceEvent::clear_work() {
  work_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000001u;
}
inline uint64_t WorkqueueQueueWorkFtraceEvent::_internal_work() const {
  return work_;
}
inline uint64_t WorkqueueQueueWorkFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.work)
  return _internal_work();
}
inline void WorkqueueQueueWorkFtraceEvent::_internal_set_work(uint64_t value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
}
inline void WorkqueueQueueWorkFtraceEvent::set_work(uint64_t value) {
  _internal_set_work(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.work)
}

// optional uint64 function = 2;
inline bool WorkqueueQueueWorkFtraceEvent::_internal_has_function() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool WorkqueueQueueWorkFtraceEvent::has_function() const {
  return _internal_has_function();
}
inline void WorkqueueQueueWorkFtraceEvent::clear_function() {
  function_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000002u;
}
inline uint64_t WorkqueueQueueWorkFtraceEvent::_internal_function() const {
  return function_;
}
inline uint64_t WorkqueueQueueWorkFtraceEvent::function() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.function)
  return _internal_function();
}
inline void WorkqueueQueueWorkFtraceEvent::_internal_set_function(uint64_t value) {
  _has_bits_[0] |= 0x00000002u;
  function_ = value;
}
inline void WorkqueueQueueWorkFtraceEvent::set_function(uint64_t value) {
  _internal_set_function(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.function)
}

// optional uint64 workqueue = 3;
inline bool WorkqueueQueueWorkFtraceEvent::_internal_has_workqueue() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool WorkqueueQueueWorkFtraceEvent::has_workqueue() const {
  return _internal_has_workqueue();
}
inline void WorkqueueQueueWorkFtraceEvent::clear_workqueue() {
  workqueue_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000004u;
}
inline uint64_t WorkqueueQueueWorkFtraceEvent::_internal_workqueue() const {
  return workqueue_;
}
inline uint64_t WorkqueueQueueWorkFtraceEvent::workqueue() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.workqueue)
  return _internal_workqueue();
}
inline void WorkqueueQueueWorkFtraceEvent::_internal_set_workqueue(uint64_t value) {
  _has_bits_[0] |= 0x00000004u;
  workqueue_ = value;
}
inline void WorkqueueQueueWorkFtraceEvent::set_workqueue(uint64_t value) {
  _internal_set_workqueue(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.workqueue)
}

// optional uint32 req_cpu = 4;
inline bool WorkqueueQueueWorkFtraceEvent::_internal_has_req_cpu() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool WorkqueueQueueWorkFtraceEvent::has_req_cpu() const {
  return _internal_has_req_cpu();
}
inline void WorkqueueQueueWorkFtraceEvent::clear_req_cpu() {
  req_cpu_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline uint32_t WorkqueueQueueWorkFtraceEvent::_internal_req_cpu() const {
  return req_cpu_;
}
inline uint32_t WorkqueueQueueWorkFtraceEvent::req_cpu() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.req_cpu)
  return _internal_req_cpu();
}
inline void WorkqueueQueueWorkFtraceEvent::_internal_set_req_cpu(uint32_t value) {
  _has_bits_[0] |= 0x00000008u;
  req_cpu_ = value;
}
inline void WorkqueueQueueWorkFtraceEvent::set_req_cpu(uint32_t value) {
  _internal_set_req_cpu(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.req_cpu)
}

// optional uint32 cpu = 5;
inline bool WorkqueueQueueWorkFtraceEvent::_internal_has_cpu() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool WorkqueueQueueWorkFtraceEvent::has_cpu() const {
  return _internal_has_cpu();
}
inline void WorkqueueQueueWorkFtraceEvent::clear_cpu() {
  cpu_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline uint32_t WorkqueueQueueWorkFtraceEvent::_internal_cpu() const {
  return cpu_;
}
inline uint32_t WorkqueueQueueWorkFtraceEvent::cpu() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.cpu)
  return _internal_cpu();
}
inline void WorkqueueQueueWorkFtraceEvent::_internal_set_cpu(uint32_t value) {
  _has_bits_[0] |= 0x00000010u;
  cpu_ = value;
}
inline void WorkqueueQueueWorkFtraceEvent::set_cpu(uint32_t value) {
  _internal_set_cpu(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.cpu)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto
