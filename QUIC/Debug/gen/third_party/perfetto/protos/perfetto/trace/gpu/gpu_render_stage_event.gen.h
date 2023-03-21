// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_GPU_GPU_RENDER_STAGE_EVENT_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_GPU_GPU_RENDER_STAGE_EVENT_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class InternedGpuRenderStageSpecification;
class InternedGraphicsContext;
class GpuRenderStageEvent;
class GpuRenderStageEvent_Specifications;
class GpuRenderStageEvent_Specifications_Description;
class GpuRenderStageEvent_Specifications_ContextSpec;
class GpuRenderStageEvent_ExtraData;
enum InternedGpuRenderStageSpecification_RenderStageCategory : int;
enum InternedGraphicsContext_Api : int;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {
enum InternedGpuRenderStageSpecification_RenderStageCategory : int {
  InternedGpuRenderStageSpecification_RenderStageCategory_OTHER = 0,
  InternedGpuRenderStageSpecification_RenderStageCategory_GRAPHICS = 1,
  InternedGpuRenderStageSpecification_RenderStageCategory_COMPUTE = 2,
};
enum InternedGraphicsContext_Api : int {
  InternedGraphicsContext_Api_UNDEFINED = 0,
  InternedGraphicsContext_Api_OPEN_GL = 1,
  InternedGraphicsContext_Api_VULKAN = 2,
  InternedGraphicsContext_Api_OPEN_CL = 3,
};

class PERFETTO_EXPORT_COMPONENT InternedGpuRenderStageSpecification : public ::protozero::CppMessageObj {
 public:
  using RenderStageCategory = InternedGpuRenderStageSpecification_RenderStageCategory;
  static constexpr auto OTHER = InternedGpuRenderStageSpecification_RenderStageCategory_OTHER;
  static constexpr auto GRAPHICS = InternedGpuRenderStageSpecification_RenderStageCategory_GRAPHICS;
  static constexpr auto COMPUTE = InternedGpuRenderStageSpecification_RenderStageCategory_COMPUTE;
  static constexpr auto RenderStageCategory_MIN = InternedGpuRenderStageSpecification_RenderStageCategory_OTHER;
  static constexpr auto RenderStageCategory_MAX = InternedGpuRenderStageSpecification_RenderStageCategory_COMPUTE;
  enum FieldNumbers {
    kIidFieldNumber = 1,
    kNameFieldNumber = 2,
    kDescriptionFieldNumber = 3,
    kCategoryFieldNumber = 4,
  };

  InternedGpuRenderStageSpecification();
  ~InternedGpuRenderStageSpecification() override;
  InternedGpuRenderStageSpecification(InternedGpuRenderStageSpecification&&) noexcept;
  InternedGpuRenderStageSpecification& operator=(InternedGpuRenderStageSpecification&&);
  InternedGpuRenderStageSpecification(const InternedGpuRenderStageSpecification&);
  InternedGpuRenderStageSpecification& operator=(const InternedGpuRenderStageSpecification&);
  bool operator==(const InternedGpuRenderStageSpecification&) const;
  bool operator!=(const InternedGpuRenderStageSpecification& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_iid() const { return _has_field_[1]; }
  uint64_t iid() const { return iid_; }
  void set_iid(uint64_t value) { iid_ = value; _has_field_.set(1); }

  bool has_name() const { return _has_field_[2]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(2); }

  bool has_description() const { return _has_field_[3]; }
  const std::string& description() const { return description_; }
  void set_description(const std::string& value) { description_ = value; _has_field_.set(3); }

  bool has_category() const { return _has_field_[4]; }
  InternedGpuRenderStageSpecification_RenderStageCategory category() const { return category_; }
  void set_category(InternedGpuRenderStageSpecification_RenderStageCategory value) { category_ = value; _has_field_.set(4); }

 private:
  uint64_t iid_{};
  std::string name_{};
  std::string description_{};
  InternedGpuRenderStageSpecification_RenderStageCategory category_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<5> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT InternedGraphicsContext : public ::protozero::CppMessageObj {
 public:
  using Api = InternedGraphicsContext_Api;
  static constexpr auto UNDEFINED = InternedGraphicsContext_Api_UNDEFINED;
  static constexpr auto OPEN_GL = InternedGraphicsContext_Api_OPEN_GL;
  static constexpr auto VULKAN = InternedGraphicsContext_Api_VULKAN;
  static constexpr auto OPEN_CL = InternedGraphicsContext_Api_OPEN_CL;
  static constexpr auto Api_MIN = InternedGraphicsContext_Api_UNDEFINED;
  static constexpr auto Api_MAX = InternedGraphicsContext_Api_OPEN_CL;
  enum FieldNumbers {
    kIidFieldNumber = 1,
    kPidFieldNumber = 2,
    kApiFieldNumber = 3,
  };

  InternedGraphicsContext();
  ~InternedGraphicsContext() override;
  InternedGraphicsContext(InternedGraphicsContext&&) noexcept;
  InternedGraphicsContext& operator=(InternedGraphicsContext&&);
  InternedGraphicsContext(const InternedGraphicsContext&);
  InternedGraphicsContext& operator=(const InternedGraphicsContext&);
  bool operator==(const InternedGraphicsContext&) const;
  bool operator!=(const InternedGraphicsContext& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_iid() const { return _has_field_[1]; }
  uint64_t iid() const { return iid_; }
  void set_iid(uint64_t value) { iid_ = value; _has_field_.set(1); }

  bool has_pid() const { return _has_field_[2]; }
  int32_t pid() const { return pid_; }
  void set_pid(int32_t value) { pid_ = value; _has_field_.set(2); }

  bool has_api() const { return _has_field_[3]; }
  InternedGraphicsContext_Api api() const { return api_; }
  void set_api(InternedGraphicsContext_Api value) { api_ = value; _has_field_.set(3); }

 private:
  uint64_t iid_{};
  int32_t pid_{};
  InternedGraphicsContext_Api api_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT GpuRenderStageEvent : public ::protozero::CppMessageObj {
 public:
  using ExtraData = GpuRenderStageEvent_ExtraData;
  using Specifications = GpuRenderStageEvent_Specifications;
  enum FieldNumbers {
    kEventIdFieldNumber = 1,
    kDurationFieldNumber = 2,
    kHwQueueIidFieldNumber = 13,
    kStageIidFieldNumber = 14,
    kGpuIdFieldNumber = 11,
    kContextFieldNumber = 5,
    kRenderTargetHandleFieldNumber = 8,
    kSubmissionIdFieldNumber = 10,
    kExtraDataFieldNumber = 6,
    kRenderPassHandleFieldNumber = 9,
    kRenderSubpassIndexMaskFieldNumber = 15,
    kCommandBufferHandleFieldNumber = 12,
    kSpecificationsFieldNumber = 7,
    kHwQueueIdFieldNumber = 3,
    kStageIdFieldNumber = 4,
  };

  GpuRenderStageEvent();
  ~GpuRenderStageEvent() override;
  GpuRenderStageEvent(GpuRenderStageEvent&&) noexcept;
  GpuRenderStageEvent& operator=(GpuRenderStageEvent&&);
  GpuRenderStageEvent(const GpuRenderStageEvent&);
  GpuRenderStageEvent& operator=(const GpuRenderStageEvent&);
  bool operator==(const GpuRenderStageEvent&) const;
  bool operator!=(const GpuRenderStageEvent& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_event_id() const { return _has_field_[1]; }
  uint64_t event_id() const { return event_id_; }
  void set_event_id(uint64_t value) { event_id_ = value; _has_field_.set(1); }

  bool has_duration() const { return _has_field_[2]; }
  uint64_t duration() const { return duration_; }
  void set_duration(uint64_t value) { duration_ = value; _has_field_.set(2); }

  bool has_hw_queue_iid() const { return _has_field_[13]; }
  uint64_t hw_queue_iid() const { return hw_queue_iid_; }
  void set_hw_queue_iid(uint64_t value) { hw_queue_iid_ = value; _has_field_.set(13); }

  bool has_stage_iid() const { return _has_field_[14]; }
  uint64_t stage_iid() const { return stage_iid_; }
  void set_stage_iid(uint64_t value) { stage_iid_ = value; _has_field_.set(14); }

  bool has_gpu_id() const { return _has_field_[11]; }
  int32_t gpu_id() const { return gpu_id_; }
  void set_gpu_id(int32_t value) { gpu_id_ = value; _has_field_.set(11); }

  bool has_context() const { return _has_field_[5]; }
  uint64_t context() const { return context_; }
  void set_context(uint64_t value) { context_ = value; _has_field_.set(5); }

  bool has_render_target_handle() const { return _has_field_[8]; }
  uint64_t render_target_handle() const { return render_target_handle_; }
  void set_render_target_handle(uint64_t value) { render_target_handle_ = value; _has_field_.set(8); }

  bool has_submission_id() const { return _has_field_[10]; }
  uint32_t submission_id() const { return submission_id_; }
  void set_submission_id(uint32_t value) { submission_id_ = value; _has_field_.set(10); }

  const std::vector<GpuRenderStageEvent_ExtraData>& extra_data() const { return extra_data_; }
  std::vector<GpuRenderStageEvent_ExtraData>* mutable_extra_data() { return &extra_data_; }
  int extra_data_size() const;
  void clear_extra_data();
  GpuRenderStageEvent_ExtraData* add_extra_data();

  bool has_render_pass_handle() const { return _has_field_[9]; }
  uint64_t render_pass_handle() const { return render_pass_handle_; }
  void set_render_pass_handle(uint64_t value) { render_pass_handle_ = value; _has_field_.set(9); }

  const std::vector<uint64_t>& render_subpass_index_mask() const { return render_subpass_index_mask_; }
  std::vector<uint64_t>* mutable_render_subpass_index_mask() { return &render_subpass_index_mask_; }
  int render_subpass_index_mask_size() const { return static_cast<int>(render_subpass_index_mask_.size()); }
  void clear_render_subpass_index_mask() { render_subpass_index_mask_.clear(); }
  void add_render_subpass_index_mask(uint64_t value) { render_subpass_index_mask_.emplace_back(value); }
  uint64_t* add_render_subpass_index_mask() { render_subpass_index_mask_.emplace_back(); return &render_subpass_index_mask_.back(); }

  bool has_command_buffer_handle() const { return _has_field_[12]; }
  uint64_t command_buffer_handle() const { return command_buffer_handle_; }
  void set_command_buffer_handle(uint64_t value) { command_buffer_handle_ = value; _has_field_.set(12); }

  bool has_specifications() const { return _has_field_[7]; }
  const GpuRenderStageEvent_Specifications& specifications() const { return *specifications_; }
  GpuRenderStageEvent_Specifications* mutable_specifications() { _has_field_.set(7); return specifications_.get(); }

  bool has_hw_queue_id() const { return _has_field_[3]; }
  int32_t hw_queue_id() const { return hw_queue_id_; }
  void set_hw_queue_id(int32_t value) { hw_queue_id_ = value; _has_field_.set(3); }

  bool has_stage_id() const { return _has_field_[4]; }
  int32_t stage_id() const { return stage_id_; }
  void set_stage_id(int32_t value) { stage_id_ = value; _has_field_.set(4); }

 private:
  uint64_t event_id_{};
  uint64_t duration_{};
  uint64_t hw_queue_iid_{};
  uint64_t stage_iid_{};
  int32_t gpu_id_{};
  uint64_t context_{};
  uint64_t render_target_handle_{};
  uint32_t submission_id_{};
  std::vector<GpuRenderStageEvent_ExtraData> extra_data_;
  uint64_t render_pass_handle_{};
  std::vector<uint64_t> render_subpass_index_mask_;
  uint64_t command_buffer_handle_{};
  ::protozero::CopyablePtr<GpuRenderStageEvent_Specifications> specifications_;
  int32_t hw_queue_id_{};
  int32_t stage_id_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<16> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT GpuRenderStageEvent_Specifications : public ::protozero::CppMessageObj {
 public:
  using ContextSpec = GpuRenderStageEvent_Specifications_ContextSpec;
  using Description = GpuRenderStageEvent_Specifications_Description;
  enum FieldNumbers {
    kContextSpecFieldNumber = 1,
    kHwQueueFieldNumber = 2,
    kStageFieldNumber = 3,
  };

  GpuRenderStageEvent_Specifications();
  ~GpuRenderStageEvent_Specifications() override;
  GpuRenderStageEvent_Specifications(GpuRenderStageEvent_Specifications&&) noexcept;
  GpuRenderStageEvent_Specifications& operator=(GpuRenderStageEvent_Specifications&&);
  GpuRenderStageEvent_Specifications(const GpuRenderStageEvent_Specifications&);
  GpuRenderStageEvent_Specifications& operator=(const GpuRenderStageEvent_Specifications&);
  bool operator==(const GpuRenderStageEvent_Specifications&) const;
  bool operator!=(const GpuRenderStageEvent_Specifications& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_context_spec() const { return _has_field_[1]; }
  const GpuRenderStageEvent_Specifications_ContextSpec& context_spec() const { return *context_spec_; }
  GpuRenderStageEvent_Specifications_ContextSpec* mutable_context_spec() { _has_field_.set(1); return context_spec_.get(); }

  const std::vector<GpuRenderStageEvent_Specifications_Description>& hw_queue() const { return hw_queue_; }
  std::vector<GpuRenderStageEvent_Specifications_Description>* mutable_hw_queue() { return &hw_queue_; }
  int hw_queue_size() const;
  void clear_hw_queue();
  GpuRenderStageEvent_Specifications_Description* add_hw_queue();

  const std::vector<GpuRenderStageEvent_Specifications_Description>& stage() const { return stage_; }
  std::vector<GpuRenderStageEvent_Specifications_Description>* mutable_stage() { return &stage_; }
  int stage_size() const;
  void clear_stage();
  GpuRenderStageEvent_Specifications_Description* add_stage();

 private:
  ::protozero::CopyablePtr<GpuRenderStageEvent_Specifications_ContextSpec> context_spec_;
  std::vector<GpuRenderStageEvent_Specifications_Description> hw_queue_;
  std::vector<GpuRenderStageEvent_Specifications_Description> stage_;

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT GpuRenderStageEvent_Specifications_Description : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kDescriptionFieldNumber = 2,
  };

  GpuRenderStageEvent_Specifications_Description();
  ~GpuRenderStageEvent_Specifications_Description() override;
  GpuRenderStageEvent_Specifications_Description(GpuRenderStageEvent_Specifications_Description&&) noexcept;
  GpuRenderStageEvent_Specifications_Description& operator=(GpuRenderStageEvent_Specifications_Description&&);
  GpuRenderStageEvent_Specifications_Description(const GpuRenderStageEvent_Specifications_Description&);
  GpuRenderStageEvent_Specifications_Description& operator=(const GpuRenderStageEvent_Specifications_Description&);
  bool operator==(const GpuRenderStageEvent_Specifications_Description&) const;
  bool operator!=(const GpuRenderStageEvent_Specifications_Description& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_description() const { return _has_field_[2]; }
  const std::string& description() const { return description_; }
  void set_description(const std::string& value) { description_ = value; _has_field_.set(2); }

 private:
  std::string name_{};
  std::string description_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT GpuRenderStageEvent_Specifications_ContextSpec : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kContextFieldNumber = 1,
    kPidFieldNumber = 2,
  };

  GpuRenderStageEvent_Specifications_ContextSpec();
  ~GpuRenderStageEvent_Specifications_ContextSpec() override;
  GpuRenderStageEvent_Specifications_ContextSpec(GpuRenderStageEvent_Specifications_ContextSpec&&) noexcept;
  GpuRenderStageEvent_Specifications_ContextSpec& operator=(GpuRenderStageEvent_Specifications_ContextSpec&&);
  GpuRenderStageEvent_Specifications_ContextSpec(const GpuRenderStageEvent_Specifications_ContextSpec&);
  GpuRenderStageEvent_Specifications_ContextSpec& operator=(const GpuRenderStageEvent_Specifications_ContextSpec&);
  bool operator==(const GpuRenderStageEvent_Specifications_ContextSpec&) const;
  bool operator!=(const GpuRenderStageEvent_Specifications_ContextSpec& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_context() const { return _has_field_[1]; }
  uint64_t context() const { return context_; }
  void set_context(uint64_t value) { context_ = value; _has_field_.set(1); }

  bool has_pid() const { return _has_field_[2]; }
  int32_t pid() const { return pid_; }
  void set_pid(int32_t value) { pid_ = value; _has_field_.set(2); }

 private:
  uint64_t context_{};
  int32_t pid_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};


class PERFETTO_EXPORT_COMPONENT GpuRenderStageEvent_ExtraData : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kNameFieldNumber = 1,
    kValueFieldNumber = 2,
  };

  GpuRenderStageEvent_ExtraData();
  ~GpuRenderStageEvent_ExtraData() override;
  GpuRenderStageEvent_ExtraData(GpuRenderStageEvent_ExtraData&&) noexcept;
  GpuRenderStageEvent_ExtraData& operator=(GpuRenderStageEvent_ExtraData&&);
  GpuRenderStageEvent_ExtraData(const GpuRenderStageEvent_ExtraData&);
  GpuRenderStageEvent_ExtraData& operator=(const GpuRenderStageEvent_ExtraData&);
  bool operator==(const GpuRenderStageEvent_ExtraData&) const;
  bool operator!=(const GpuRenderStageEvent_ExtraData& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_name() const { return _has_field_[1]; }
  const std::string& name() const { return name_; }
  void set_name(const std::string& value) { name_ = value; _has_field_.set(1); }

  bool has_value() const { return _has_field_[2]; }
  const std::string& value() const { return value_; }
  void set_value(const std::string& value) { value_ = value; _has_field_.set(2); }

 private:
  std::string name_{};
  std::string value_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<3> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_GPU_GPU_RENDER_STAGE_EVENT_PROTO_CPP_H_
