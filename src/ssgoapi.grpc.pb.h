// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ssgoapi.proto
#ifndef GRPC_ssgoapi_2eproto__INCLUDED
#define GRPC_ssgoapi_2eproto__INCLUDED

#include "ssgoapi.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace api {

class SSService final {
 public:
  static constexpr char const* service_full_name() {
    return "api.SSService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::api::StatsReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::api::StatsReply>> AsyncQueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::api::StatsReply>>(AsyncQueryStatsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::api::StatsReply>> PrepareAsyncQueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::api::StatsReply>>(PrepareAsyncQueryStatsRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::api::StatsReply>* AsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::api::StatsReply>* PrepareAsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::api::StatsReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::api::StatsReply>> AsyncQueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::api::StatsReply>>(AsyncQueryStatsRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::api::StatsReply>> PrepareAsyncQueryStats(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::api::StatsReply>>(PrepareAsyncQueryStatsRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, std::function<void(::grpc::Status)>) override;
      void QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void QueryStats(::grpc::ClientContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void QueryStats(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::api::StatsReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::api::StatsReply>* AsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::api::StatsReply>* PrepareAsyncQueryStatsRaw(::grpc::ClientContext* context, const ::api::StatsRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_QueryStats_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status QueryStats(::grpc::ServerContext* context, const ::api::StatsRequest* request, ::api::StatsReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_QueryStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_QueryStats() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_QueryStats() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryStats(::grpc::ServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestQueryStats(::grpc::ServerContext* context, ::api::StatsRequest* request, ::grpc::ServerAsyncResponseWriter< ::api::StatsReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_QueryStats<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_QueryStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_QueryStats() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::api::StatsRequest, ::api::StatsReply>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::api::StatsRequest* request, ::api::StatsReply* response) { return this->QueryStats(context, request, response); }));}
    void SetMessageAllocatorFor_QueryStats(
        ::grpc::experimental::MessageAllocator< ::api::StatsRequest, ::api::StatsReply>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::api::StatsRequest, ::api::StatsReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_QueryStats() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryStats(::grpc::ServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* QueryStats(
      ::grpc::CallbackServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* QueryStats(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_QueryStats<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_QueryStats<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_QueryStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_QueryStats() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_QueryStats() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryStats(::grpc::ServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_QueryStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_QueryStats() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_QueryStats() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryStats(::grpc::ServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestQueryStats(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_QueryStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_QueryStats() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->QueryStats(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_QueryStats() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryStats(::grpc::ServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* QueryStats(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* QueryStats(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_QueryStats : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_QueryStats() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::api::StatsRequest, ::api::StatsReply>(std::bind(&WithStreamedUnaryMethod_QueryStats<BaseClass>::StreamedQueryStats, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_QueryStats() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status QueryStats(::grpc::ServerContext* /*context*/, const ::api::StatsRequest* /*request*/, ::api::StatsReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedQueryStats(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::api::StatsRequest,::api::StatsReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_QueryStats<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_QueryStats<Service > StreamedService;
};

}  // namespace api


#endif  // GRPC_ssgoapi_2eproto__INCLUDED
