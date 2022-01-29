#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmmsharedmoduleNetworkClient, KmmsharedmoduleMoviesList, KmmsharedmoduleKtor_client_coreHttpClient, KmmsharedmoduleDIManager, KmmsharedmoduleMoviesItem, KmmsharedmoduleMoviesListConfiguratorCompanion, KmmsharedmoduleMoviesListConfigurator, KmmsharedmoduleModuleCoroutineScope, KmmsharedmoduleBaseInteractor<T>, KmmsharedmoduleBasePresenter<T>, KmmsharedmoduleDi_multiplatform_coreScopeType, KmmsharedmoduleDi_multiplatform_coreDIContainer, KmmsharedmoduleMoviesItemCompanion, KmmsharedmoduleMoviesListCompanion, KmmsharedmoduleKotlinAbstractCoroutineContextElement, KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcherKey, KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher, KmmsharedmoduleMainDispatcher, KmmsharedmoduleConfiguration, KmmsharedmoduleModuleConfigCompanion, KmmsharedmoduleModuleConfig, KmmsharedmoduleDi_multiplatform_coreBaseDIComponent, KmmsharedmoduleAppConfiguratorContainerCompanion, KmmsharedmoduleAppConfiguratorContainer, KmmsharedmoduleKotlinThrowable, KmmsharedmoduleKotlinArray<T>, KmmsharedmoduleKotlinException, KmmsharedmoduleKotlinRuntimeException, KmmsharedmoduleKotlinIllegalStateException, KmmsharedmoduleKtor_client_coreHttpClientEngineConfig, KmmsharedmoduleKtor_client_coreHttpClientConfig<T>, KmmsharedmoduleKtor_client_coreHttpRequestBuilder, KmmsharedmoduleKtor_client_coreHttpClientCall, KmmsharedmoduleKtor_client_coreHttpReceivePipeline, KmmsharedmoduleKtor_client_coreHttpRequestPipeline, KmmsharedmoduleKtor_client_coreHttpResponsePipeline, KmmsharedmoduleKtor_client_coreHttpSendPipeline, KmmsharedmoduleKotlinEnumCompanion, KmmsharedmoduleKotlinEnum<E>, KmmsharedmoduleDi_multiplatform_coreDIContainerCompanion, KmmsharedmoduleDi_multiplatform_coreResolver, KmmsharedmoduleKotlinAbstractCoroutineContextKey<B, E>, KmmsharedmoduleKtor_client_coreHttpRequestData, KmmsharedmoduleKtor_client_coreHttpResponseData, KmmsharedmoduleKtor_client_coreProxyConfig, KmmsharedmoduleKotlinNothing, KmmsharedmoduleKtor_httpHeadersBuilder, KmmsharedmoduleKtor_client_coreHttpRequestBuilderCompanion, KmmsharedmoduleKtor_httpURLBuilder, KmmsharedmoduleKtor_httpHttpMethod, KmmsharedmoduleKtor_client_coreHttpClientCallCompanion, KmmsharedmoduleKtor_client_coreTypeInfo, KmmsharedmoduleKtor_client_coreHttpResponse, KmmsharedmoduleKtor_utilsAttributeKey<T>, KmmsharedmoduleKtor_utilsPipelinePhase, KmmsharedmoduleKtor_utilsPipeline<TSubject, TContext>, KmmsharedmoduleKtor_client_coreHttpReceivePipelinePhases, KmmsharedmoduleKtor_client_coreHttpRequestPipelinePhases, KmmsharedmoduleKtor_client_coreHttpResponsePipelinePhases, KmmsharedmoduleKtor_client_coreHttpResponseContainer, KmmsharedmoduleKtor_client_coreHttpSendPipelinePhases, KmmsharedmoduleKotlinx_serialization_coreSerializersModule, KmmsharedmoduleKotlinx_serialization_coreSerialKind, KmmsharedmoduleKtor_httpUrl, KmmsharedmoduleKtor_httpOutgoingContent, KmmsharedmoduleKtor_httpHttpStatusCode, KmmsharedmoduleKtor_utilsGMTDate, KmmsharedmoduleKtor_httpHttpProtocolVersion, KmmsharedmoduleKtor_utilsStringValuesBuilder, KmmsharedmoduleKtor_httpURLProtocol, KmmsharedmoduleKtor_httpParametersBuilder, KmmsharedmoduleKtor_httpURLBuilderCompanion, KmmsharedmoduleKotlinCancellationException, KmmsharedmoduleKotlinUnit, KmmsharedmoduleKtor_httpHttpMethodCompanion, KmmsharedmoduleKtor_ioMemory, KmmsharedmoduleKtor_ioIoBuffer, KmmsharedmoduleKotlinByteArray, KmmsharedmoduleKtor_ioByteReadPacket, KmmsharedmoduleKtor_ioByteOrder, KmmsharedmoduleKtor_httpUrlCompanion, KmmsharedmoduleKtor_httpContentType, KmmsharedmoduleKtor_httpHttpStatusCodeCompanion, KmmsharedmoduleKtor_utilsGMTDateCompanion, KmmsharedmoduleKtor_utilsWeekDay, KmmsharedmoduleKtor_utilsMonth, KmmsharedmoduleKtor_httpHttpProtocolVersionCompanion, KmmsharedmoduleKtor_httpURLProtocolCompanion, KmmsharedmoduleKtor_httpUrlEncodingOption, KmmsharedmoduleKtor_ioMemoryCompanion, KmmsharedmoduleKtor_ioBufferCompanion, KmmsharedmoduleKtor_ioBuffer, KmmsharedmoduleKtor_ioChunkBuffer, KmmsharedmoduleKtor_ioChunkBufferCompanion, KmmsharedmoduleKotlinCharArray, KmmsharedmoduleKtor_ioIoBufferCompanion, KmmsharedmoduleKotlinByteIterator, KmmsharedmoduleKtor_ioAbstractInputCompanion, KmmsharedmoduleKtor_ioAbstractInput, KmmsharedmoduleKtor_ioByteReadPacketBaseCompanion, KmmsharedmoduleKtor_ioByteReadPacketBase, KmmsharedmoduleKtor_ioByteReadPacketPlatformBase, KmmsharedmoduleKtor_ioByteReadPacketCompanion, KmmsharedmoduleKtor_ioByteOrderCompanion, KmmsharedmoduleKotlinKTypeProjection, KmmsharedmoduleKtor_httpHeaderValueParam, KmmsharedmoduleKtor_httpHeaderValueWithParametersCompanion, KmmsharedmoduleKtor_httpHeaderValueWithParameters, KmmsharedmoduleKtor_httpContentTypeCompanion, KmmsharedmoduleKtor_utilsWeekDayCompanion, KmmsharedmoduleKtor_utilsMonthCompanion, KmmsharedmoduleKotlinx_coroutines_coreAtomicDesc, KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, KmmsharedmoduleKotlinCharIterator, KmmsharedmoduleKotlinKVariance, KmmsharedmoduleKotlinKTypeProjectionCompanion, KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<__contravariant T>, KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor, KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode, KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol KmmsharedmoduleIMoviesListPresenter, KmmsharedmoduleIInteractor, KmmsharedmoduleIMoviesListView, KmmsharedmoduleIMoviesListInteractor, KmmsharedmoduleIInputView, KmmsharedmoduleIView, KmmsharedmoduleIConfigurator, KmmsharedmoduleKotlinCoroutineContext, KmmsharedmoduleIPresenter, KmmsharedmoduleKotlinKClass, KmmsharedmoduleKotlinx_serialization_coreKSerializer, KmmsharedmoduleKotlinCoroutineContextKey, KmmsharedmoduleKotlinCoroutineContextElement, KmmsharedmoduleKotlinContinuation, KmmsharedmoduleKotlinContinuationInterceptor, KmmsharedmoduleKotlinx_coroutines_coreRunnable, KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope, KmmsharedmoduleKtor_ioCloseable, KmmsharedmoduleKtor_client_coreHttpClientEngine, KmmsharedmoduleKtor_client_coreHttpClientEngineCapability, KmmsharedmoduleKtor_utilsAttributes, KmmsharedmoduleKotlinComparable, KmmsharedmoduleKotlinKDeclarationContainer, KmmsharedmoduleKotlinKAnnotatedElement, KmmsharedmoduleKotlinKClassifier, KmmsharedmoduleDi_multiplatform_coreContainerProtocol, KmmsharedmoduleKotlinx_serialization_coreEncoder, KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor, KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy, KmmsharedmoduleKotlinx_serialization_coreDecoder, KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy, KmmsharedmoduleKotlinIterator, KmmsharedmoduleKtor_client_coreHttpClientFeature, KmmsharedmoduleKtor_httpHttpMessageBuilder, KmmsharedmoduleKotlinx_coroutines_coreJob, KmmsharedmoduleKtor_ioByteReadChannel, KmmsharedmoduleKtor_utilsTypeInfo, KmmsharedmoduleKtor_client_coreHttpRequest, KmmsharedmoduleKotlinSuspendFunction2, KmmsharedmoduleDi_multiplatform_coreResolverProtocol, KmmsharedmoduleKotlinx_serialization_coreCompositeEncoder, KmmsharedmoduleKotlinAnnotation, KmmsharedmoduleKotlinx_serialization_coreCompositeDecoder, KmmsharedmoduleKtor_httpHeaders, KmmsharedmoduleKtor_utilsStringValues, KmmsharedmoduleKotlinMapEntry, KmmsharedmoduleKotlinx_coroutines_coreChildHandle, KmmsharedmoduleKotlinx_coroutines_coreChildJob, KmmsharedmoduleKotlinx_coroutines_coreDisposableHandle, KmmsharedmoduleKotlinSequence, KmmsharedmoduleKotlinx_coroutines_coreSelectClause0, KmmsharedmoduleKtor_ioReadSession, KmmsharedmoduleKotlinSuspendFunction1, KmmsharedmoduleKotlinAppendable, KmmsharedmoduleKotlinKType, KmmsharedmoduleKtor_httpHttpMessage, KmmsharedmoduleKotlinFunction, KmmsharedmoduleKotlinx_serialization_coreSerializersModuleCollector, KmmsharedmoduleKtor_httpParameters, KmmsharedmoduleKotlinx_coroutines_coreParentJob, KmmsharedmoduleKotlinx_coroutines_coreSelectInstance, KmmsharedmoduleKotlinSuspendFunction0, KmmsharedmoduleKtor_ioObjectPool, KmmsharedmoduleKtor_ioInput, KmmsharedmoduleKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KmmsharedmoduleBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KmmsharedmoduleBase (KmmsharedmoduleBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KmmsharedmoduleMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmmsharedmoduleMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKmmsharedmoduleKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KmmsharedmoduleNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KmmsharedmoduleByte : KmmsharedmoduleNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KmmsharedmoduleUByte : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KmmsharedmoduleShort : KmmsharedmoduleNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KmmsharedmoduleUShort : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KmmsharedmoduleInt : KmmsharedmoduleNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KmmsharedmoduleUInt : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KmmsharedmoduleLong : KmmsharedmoduleNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KmmsharedmoduleULong : KmmsharedmoduleNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KmmsharedmoduleFloat : KmmsharedmoduleNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KmmsharedmoduleDouble : KmmsharedmoduleNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KmmsharedmoduleBoolean : KmmsharedmoduleNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesService")))
@interface KmmsharedmoduleMoviesService : KmmsharedmoduleBase
- (instancetype)initWithNetworkClient:(KmmsharedmoduleNetworkClient * _Nullable)networkClient __attribute__((swift_name("init(networkClient:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadMoviesWithCompletionHandler:(void (^)(KmmsharedmoduleMoviesList * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("loadMovies(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchMoviesQuery:(NSString *)query completionHandler:(void (^)(KmmsharedmoduleMoviesList * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("searchMovies(query:completionHandler:)")));
@property (readonly) KmmsharedmoduleNetworkClient * _Nullable networkClient __attribute__((swift_name("networkClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkClient")))
@interface KmmsharedmoduleNetworkClient : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadContentDataUrl:(NSString *)url completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("loadContentData(url:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadDataUrl:(NSString *)url completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("loadData(url:completionHandler:)")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleService")))
@interface KmmsharedmoduleSampleService : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfigurator")))
@interface KmmsharedmoduleAppConfigurator : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigurationApp")))
@interface KmmsharedmoduleConfigurationApp : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setup __attribute__((swift_name("setup()")));
@property (readonly) KmmsharedmoduleDIManager *appContainer __attribute__((swift_name("appContainer")));
@end;

__attribute__((swift_name("IInteractor")))
@protocol KmmsharedmoduleIInteractor
@required
- (void)attachView __attribute__((swift_name("attachView()")));
- (void)detachView __attribute__((swift_name("detachView()")));
- (void)setupDi:(KmmsharedmoduleDIManager *)di __attribute__((swift_name("setup(di:)")));
@end;

__attribute__((swift_name("IMoviesListInteractor")))
@protocol KmmsharedmoduleIMoviesListInteractor <KmmsharedmoduleIInteractor>
@required
- (void)loadMovies __attribute__((swift_name("loadMovies()")));
@property id<KmmsharedmoduleIMoviesListPresenter> _Nullable presenter __attribute__((swift_name("presenter")));
@end;

__attribute__((swift_name("IMoviesListPresenter")))
@protocol KmmsharedmoduleIMoviesListPresenter
@required
- (void)setupItems:(NSArray<KmmsharedmoduleMoviesItem *> *)items __attribute__((swift_name("setup(items:)")));
@property id<KmmsharedmoduleIMoviesListView> _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((swift_name("IInputView")))
@protocol KmmsharedmoduleIInputView
@required
@end;

__attribute__((swift_name("IView")))
@protocol KmmsharedmoduleIView <KmmsharedmoduleIInputView>
@required
@end;

__attribute__((swift_name("IMoviesListView")))
@protocol KmmsharedmoduleIMoviesListView <KmmsharedmoduleIView>
@required
- (void)setupItems:(NSArray<KmmsharedmoduleMoviesItem *> *)items __attribute__((swift_name("setup(items:)")));
@property id<KmmsharedmoduleIMoviesListInteractor> _Nullable interactor __attribute__((swift_name("interactor")));
@end;

__attribute__((swift_name("IConfigurator")))
@protocol KmmsharedmoduleIConfigurator
@required
- (id<KmmsharedmoduleIInteractor> _Nullable)createView:(id<KmmsharedmoduleIView>)view __attribute__((swift_name("create(view:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesListConfigurator")))
@interface KmmsharedmoduleMoviesListConfigurator : KmmsharedmoduleBase <KmmsharedmoduleIConfigurator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmsharedmoduleMoviesListConfiguratorCompanion *companion __attribute__((swift_name("companion")));
- (id<KmmsharedmoduleIInteractor> _Nullable)createView:(id<KmmsharedmoduleIView>)view __attribute__((swift_name("create(view:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesListConfigurator.Companion")))
@interface KmmsharedmoduleMoviesListConfiguratorCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleMoviesListConfiguratorCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleMoviesListConfigurator *instance __attribute__((swift_name("instance")));
@end;

__attribute__((swift_name("BaseInteractor")))
@interface KmmsharedmoduleBaseInteractor<T> : KmmsharedmoduleBase
- (instancetype)initWithCoroutineContext:(id<KmmsharedmoduleKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(coroutineContext:)"))) __attribute__((objc_designated_initializer));
- (void)attachView __attribute__((swift_name("attachView()")));
- (void)detachView __attribute__((swift_name("detachView()")));
@property KmmsharedmoduleModuleCoroutineScope *scope __attribute__((swift_name("scope")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesListInteractor")))
@interface KmmsharedmoduleMoviesListInteractor : KmmsharedmoduleBaseInteractor<id<KmmsharedmoduleIMoviesListView>> <KmmsharedmoduleIMoviesListInteractor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithCoroutineContext:(id<KmmsharedmoduleKotlinCoroutineContext>)coroutineContext __attribute__((swift_name("init(coroutineContext:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)loadMovies __attribute__((swift_name("loadMovies()")));
- (void)setupDi:(KmmsharedmoduleDIManager *)di __attribute__((swift_name("setup(di:)")));
@property id<KmmsharedmoduleIMoviesListPresenter> _Nullable presenter __attribute__((swift_name("presenter")));
@end;

__attribute__((swift_name("IPresenter")))
@protocol KmmsharedmoduleIPresenter
@required
@end;

__attribute__((swift_name("BasePresenter")))
@interface KmmsharedmoduleBasePresenter<T> : KmmsharedmoduleBase <KmmsharedmoduleIPresenter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onAttachViewView:(T)view __attribute__((swift_name("onAttachView(view:)")));
- (void)onDetachView __attribute__((swift_name("onDetachView()")));
@property T _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesListPresenter")))
@interface KmmsharedmoduleMoviesListPresenter : KmmsharedmoduleBasePresenter<id<KmmsharedmoduleIMoviesListView>> <KmmsharedmoduleIMoviesListPresenter>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setupItems:(NSArray<KmmsharedmoduleMoviesItem *> *)items __attribute__((swift_name("setup(items:)")));
@property id<KmmsharedmoduleIMoviesListView> _Nullable view __attribute__((swift_name("view")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DIManager")))
@interface KmmsharedmoduleDIManager : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addToScopeScope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope type:(NSString * _Nullable)type fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("addToScope(scope:type:fabric:)")));
- (void)addToScopeScope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope type:(id<KmmsharedmoduleKotlinKClass>)type fabric_:(id _Nullable (^)(void))fabric __attribute__((swift_name("addToScope(scope:type:fabric_:)")));
- (void)registerType:(NSString * _Nullable)type fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(type:fabric:)")));
- (id _Nullable)resolveView:(id<KmmsharedmoduleIView>)view __attribute__((swift_name("resolve(view:)")));
- (id _Nullable)resolveType:(NSString * _Nullable)type __attribute__((swift_name("resolve(type:)")));
- (id _Nullable)resolveType_:(id<KmmsharedmoduleKotlinKClass>)type __attribute__((swift_name("resolve(type_:)")));
@property (readonly) KmmsharedmoduleDi_multiplatform_coreDIContainer *appContainer __attribute__((swift_name("appContainer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesItem")))
@interface KmmsharedmoduleMoviesItem : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmsharedmoduleMoviesItemCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)imagePath __attribute__((swift_name("imagePath()")));
@property int64_t id __attribute__((swift_name("id")));
@property NSString * _Nullable overview __attribute__((swift_name("overview")));
@property NSString * _Nullable posterPath __attribute__((swift_name("posterPath")));
@property NSString * _Nullable releaseDate __attribute__((swift_name("releaseDate")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesItem.Companion")))
@interface KmmsharedmoduleMoviesItemCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleMoviesItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmsharedmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesList")))
@interface KmmsharedmoduleMoviesList : KmmsharedmoduleBase
- (instancetype)initWithResults:(NSArray<KmmsharedmoduleMoviesItem *> *)results __attribute__((swift_name("init(results:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleMoviesListCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<KmmsharedmoduleMoviesItem *> *)component1 __attribute__((swift_name("component1()")));
- (KmmsharedmoduleMoviesList *)doCopyResults:(NSArray<KmmsharedmoduleMoviesItem *> *)results __attribute__((swift_name("doCopy(results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<KmmsharedmoduleMoviesItem *> *results __attribute__((swift_name("results")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MoviesList.Companion")))
@interface KmmsharedmoduleMoviesListCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleMoviesListCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmsharedmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KmmsharedmoduleKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KmmsharedmoduleKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KmmsharedmoduleKotlinCoroutineContextElement> _Nullable)getKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KmmsharedmoduleKotlinCoroutineContext>)minusKeyKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KmmsharedmoduleKotlinCoroutineContext>)plusContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KmmsharedmoduleKotlinCoroutineContextElement <KmmsharedmoduleKotlinCoroutineContext>
@required
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KmmsharedmoduleKotlinAbstractCoroutineContextElement : KmmsharedmoduleBase <KmmsharedmoduleKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KmmsharedmoduleKotlinContinuationInterceptor <KmmsharedmoduleKotlinCoroutineContextElement>
@required
- (id<KmmsharedmoduleKotlinContinuation>)interceptContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher : KmmsharedmoduleKotlinAbstractCoroutineContextElement <KmmsharedmoduleKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context block:(id<KmmsharedmoduleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context block:(id<KmmsharedmoduleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KmmsharedmoduleKotlinContinuation>)interceptContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KmmsharedmoduleKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainDispatcher")))
@interface KmmsharedmoduleMainDispatcher : KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)mainDispatcher __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleMainDispatcher *shared __attribute__((swift_name("shared")));
- (void)dispatchContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context block:(id<KmmsharedmoduleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Configuration")))
@interface KmmsharedmoduleConfiguration : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)configuration __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleConfiguration *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *API_KEY __attribute__((swift_name("API_KEY")));
@property (readonly) NSString *BASE_RAW_URL __attribute__((swift_name("BASE_RAW_URL")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleConfig")))
@interface KmmsharedmoduleModuleConfig : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmsharedmoduleModuleConfigCompanion *companion __attribute__((swift_name("companion")));
- (id<KmmsharedmoduleIInteractor> _Nullable)configView:(id<KmmsharedmoduleIView>)view __attribute__((swift_name("config(view:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleConfig.Companion")))
@interface KmmsharedmoduleModuleConfigCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleModuleConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleModuleConfig *instance __attribute__((swift_name("instance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModuleCoroutineScope")))
@interface KmmsharedmoduleModuleCoroutineScope : KmmsharedmoduleBase <KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithContext:(id<KmmsharedmoduleKotlinCoroutineContext>)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (void)viewDetached __attribute__((swift_name("viewDetached()")));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Di_multiplatform_coreBaseDIComponent")))
@interface KmmsharedmoduleDi_multiplatform_coreBaseDIComponent : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addToScopeScope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope type:(NSString * _Nullable)type fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("addToScope(scope:type:fabric:)")));
- (void)addToScopeScope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope type:(id<KmmsharedmoduleKotlinKClass>)type fabric_:(id _Nullable (^)(void))fabric __attribute__((swift_name("addToScope(scope:type:fabric_:)")));
- (void)registerType:(NSString * _Nullable)type fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(type:fabric:)")));
- (id _Nullable)resolveType:(NSString * _Nullable)type __attribute__((swift_name("resolve(type:)")));
- (id _Nullable)resolveType_:(id<KmmsharedmoduleKotlinKClass>)type __attribute__((swift_name("resolve(type_:)")));
- (void)setup __attribute__((swift_name("setup()")));
@property (readonly) KmmsharedmoduleDi_multiplatform_coreDIContainer *appContainer __attribute__((swift_name("appContainer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfiguratorContainer")))
@interface KmmsharedmoduleAppConfiguratorContainer : KmmsharedmoduleDi_multiplatform_coreBaseDIComponent
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmsharedmoduleAppConfiguratorContainerCompanion *companion __attribute__((swift_name("companion")));
- (void)setup __attribute__((swift_name("setup()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppConfiguratorContainer.Companion")))
@interface KmmsharedmoduleAppConfiguratorContainerCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleAppConfiguratorContainerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly, getter=doNewInstance) KmmsharedmoduleAppConfiguratorContainer *newInstance __attribute__((swift_name("newInstance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigApp")))
@interface KmmsharedmoduleConfigApp : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)setup __attribute__((swift_name("setup()")));
@property (readonly) KmmsharedmoduleDIManager *appContainer __attribute__((swift_name("appContainer")));
@end;

@interface KmmsharedmoduleDIManager (Extensions)
- (void)registerClazz:(Class)clazz fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(clazz:fabric:)")));
- (id _Nullable)resolveClazz:(Class)clazz __attribute__((swift_name("resolve(clazz:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchersKt")))
@interface KmmsharedmoduleDispatchersKt : KmmsharedmoduleBase
@property (class, readonly) id<KmmsharedmoduleKotlinCoroutineContext> ioDispatcher __attribute__((swift_name("ioDispatcher")));
@property (class, readonly) id<KmmsharedmoduleKotlinCoroutineContext> uiDispatcher __attribute__((swift_name("uiDispatcher")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KmmsharedmoduleKotlinThrowable : KmmsharedmoduleBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KmmsharedmoduleKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmsharedmoduleKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KmmsharedmoduleKotlinException : KmmsharedmoduleKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmmsharedmoduleKotlinRuntimeException : KmmsharedmoduleKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmmsharedmoduleKotlinIllegalStateException : KmmsharedmoduleKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KmmsharedmoduleKotlinCancellationException : KmmsharedmoduleKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KmmsharedmoduleKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KmmsharedmoduleKtor_client_coreHttpClient : KmmsharedmoduleBase <KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope, KmmsharedmoduleKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KmmsharedmoduleKtor_client_coreHttpClientEngine>)engine userConfig:(KmmsharedmoduleKtor_client_coreHttpClientConfig<KmmsharedmoduleKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (KmmsharedmoduleKtor_client_coreHttpClient *)configBlock:(void (^)(KmmsharedmoduleKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(KmmsharedmoduleKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(KmmsharedmoduleKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<KmmsharedmoduleKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmmsharedmoduleKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<KmmsharedmoduleKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KmmsharedmoduleKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KmmsharedmoduleKotlinEnum<E> : KmmsharedmoduleBase <KmmsharedmoduleKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Di_multiplatform_coreScopeType")))
@interface KmmsharedmoduleDi_multiplatform_coreScopeType : KmmsharedmoduleKotlinEnum<KmmsharedmoduleDi_multiplatform_coreScopeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmsharedmoduleDi_multiplatform_coreScopeType *container __attribute__((swift_name("container")));
@property (class, readonly) KmmsharedmoduleDi_multiplatform_coreScopeType *cached __attribute__((swift_name("cached")));
@property (class, readonly) KmmsharedmoduleDi_multiplatform_coreScopeType *graph __attribute__((swift_name("graph")));
@property (class, readonly) KmmsharedmoduleDi_multiplatform_coreScopeType *weak __attribute__((swift_name("weak")));
@property (class, readonly) KmmsharedmoduleDi_multiplatform_coreScopeType *entity __attribute__((swift_name("entity")));
+ (KmmsharedmoduleKotlinArray<KmmsharedmoduleDi_multiplatform_coreScopeType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmmsharedmoduleKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmmsharedmoduleKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KmmsharedmoduleKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KmmsharedmoduleKotlinKClass <KmmsharedmoduleKotlinKDeclarationContainer, KmmsharedmoduleKotlinKAnnotatedElement, KmmsharedmoduleKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Di_multiplatform_coreContainerProtocol")))
@protocol KmmsharedmoduleDi_multiplatform_coreContainerProtocol
@required
- (void)registerType:(NSString * _Nullable)type scope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(type:scope:fabric:)")));
- (id _Nullable)resolveType:(NSString * _Nullable)type __attribute__((swift_name("resolve(type:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Di_multiplatform_coreDIContainer")))
@interface KmmsharedmoduleDi_multiplatform_coreDIContainer : KmmsharedmoduleBase <KmmsharedmoduleDi_multiplatform_coreContainerProtocol>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmsharedmoduleDi_multiplatform_coreDIContainerCompanion *companion __attribute__((swift_name("companion")));
- (void)registerType:(NSString * _Nullable)type scope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(type:scope:fabric:)")));
- (void)registerClazz:(id<KmmsharedmoduleKotlinKClass>)clazz scope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(clazz:scope:fabric:)")));
- (id _Nullable)resolveType:(NSString * _Nullable)type __attribute__((swift_name("resolve(type:)")));
- (id _Nullable)resolveClazz:(id<KmmsharedmoduleKotlinKClass>)clazz __attribute__((swift_name("resolve(clazz:)")));
@property (readonly) KmmsharedmoduleDi_multiplatform_coreResolver *resolver __attribute__((swift_name("resolver")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KmmsharedmoduleKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KmmsharedmoduleKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmmsharedmoduleKotlinx_serialization_coreKSerializer <KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy, KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KmmsharedmoduleKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol KmmsharedmoduleKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KmmsharedmoduleKotlinAbstractCoroutineContextKey<B, E> : KmmsharedmoduleBase <KmmsharedmoduleKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KmmsharedmoduleKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcherKey : KmmsharedmoduleKotlinAbstractCoroutineContextKey<id<KmmsharedmoduleKotlinContinuationInterceptor>, KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KmmsharedmoduleKotlinCoroutineContextKey>)baseKey safeCast:(id<KmmsharedmoduleKotlinCoroutineContextElement> _Nullable (^)(id<KmmsharedmoduleKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmmsharedmoduleKotlinArray<T> : KmmsharedmoduleBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmmsharedmoduleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmmsharedmoduleKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KmmsharedmoduleKtor_client_coreHttpClientEngine <KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope, KmmsharedmoduleKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KmmsharedmoduleKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KmmsharedmoduleKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(KmmsharedmoduleKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<KmmsharedmoduleKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KmmsharedmoduleKtor_client_coreHttpClientEngineConfig : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property KmmsharedmoduleKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) KmmsharedmoduleKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KmmsharedmoduleKtor_client_coreHttpClientConfig<T> : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmmsharedmoduleKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(KmmsharedmoduleKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<KmmsharedmoduleKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(KmmsharedmoduleKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(KmmsharedmoduleKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KmmsharedmoduleKtor_httpHttpMessageBuilder
@required
@property (readonly) KmmsharedmoduleKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KmmsharedmoduleKtor_client_coreHttpRequestBuilder : KmmsharedmoduleBase <KmmsharedmoduleKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KmmsharedmoduleKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<KmmsharedmoduleKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<KmmsharedmoduleKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<KmmsharedmoduleKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (KmmsharedmoduleKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KmmsharedmoduleKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (KmmsharedmoduleKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KmmsharedmoduleKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(KmmsharedmoduleKtor_httpURLBuilder *, KmmsharedmoduleKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<KmmsharedmoduleKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<KmmsharedmoduleKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) KmmsharedmoduleKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property KmmsharedmoduleKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmmsharedmoduleKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KmmsharedmoduleKtor_client_coreHttpClientCall : KmmsharedmoduleBase <KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KmmsharedmoduleKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(KmmsharedmoduleKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<KmmsharedmoduleKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<KmmsharedmoduleKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KmmsharedmoduleKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KmmsharedmoduleKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KmmsharedmoduleKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<KmmsharedmoduleKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KmmsharedmoduleKtor_utilsPipeline<TSubject, TContext> : KmmsharedmoduleBase
- (instancetype)initWithPhase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmmsharedmoduleKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(KmmsharedmoduleKtor_utilsPipelinePhase *)reference phase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(KmmsharedmoduleKtor_utilsPipelinePhase *)reference phase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase block:(id<KmmsharedmoduleKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(KmmsharedmoduleKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<KmmsharedmoduleKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KmmsharedmoduleKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KmmsharedmoduleKtor_client_coreHttpReceivePipeline : KmmsharedmoduleKtor_utilsPipeline<KmmsharedmoduleKtor_client_coreHttpResponse *, KmmsharedmoduleKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmmsharedmoduleKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KmmsharedmoduleKtor_client_coreHttpRequestPipeline : KmmsharedmoduleKtor_utilsPipeline<id, KmmsharedmoduleKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmmsharedmoduleKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KmmsharedmoduleKtor_client_coreHttpResponsePipeline : KmmsharedmoduleKtor_utilsPipeline<KmmsharedmoduleKtor_client_coreHttpResponseContainer *, KmmsharedmoduleKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmmsharedmoduleKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KmmsharedmoduleKtor_client_coreHttpSendPipeline : KmmsharedmoduleKtor_utilsPipeline<id, KmmsharedmoduleKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmmsharedmoduleKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmmsharedmoduleKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KmmsharedmoduleKotlinEnumCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Di_multiplatform_coreDIContainer.Companion")))
@interface KmmsharedmoduleDi_multiplatform_coreDIContainerCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleDi_multiplatform_coreDIContainerCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleDi_multiplatform_coreDIContainer *Factory __attribute__((swift_name("Factory")));
@end;

__attribute__((swift_name("Di_multiplatform_coreResolverProtocol")))
@protocol KmmsharedmoduleDi_multiplatform_coreResolverProtocol
@required
- (void)registerClazz:(id<KmmsharedmoduleKotlinKClass>)clazz scope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(clazz:scope:fabric:)")));
- (id _Nullable)resolveClazz:(id<KmmsharedmoduleKotlinKClass>)clazz __attribute__((swift_name("resolve(clazz:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Di_multiplatform_coreResolver")))
@interface KmmsharedmoduleDi_multiplatform_coreResolver : KmmsharedmoduleBase <KmmsharedmoduleDi_multiplatform_coreResolverProtocol>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)registerClazz:(id<KmmsharedmoduleKotlinKClass>)clazz scope:(KmmsharedmoduleDi_multiplatform_coreScopeType *)scope fabric:(id _Nullable (^)(void))fabric __attribute__((swift_name("register(clazz:scope:fabric:)")));
- (id _Nullable)resolveClazz:(id<KmmsharedmoduleKotlinKClass>)clazz __attribute__((swift_name("resolve(clazz:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmmsharedmoduleKotlinx_serialization_coreEncoder
@required
- (id<KmmsharedmoduleKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KmmsharedmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KmmsharedmoduleKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KmmsharedmoduleKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KmmsharedmoduleKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmmsharedmoduleKotlinx_serialization_coreDecoder
@required
- (id<KmmsharedmoduleKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KmmsharedmoduleKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KmmsharedmoduleKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KmmsharedmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KmmsharedmoduleKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KmmsharedmoduleKtor_client_coreHttpRequestData : KmmsharedmoduleBase
- (instancetype)initWithUrl:(KmmsharedmoduleKtor_httpUrl *)url method:(KmmsharedmoduleKtor_httpHttpMethod *)method headers:(id<KmmsharedmoduleKtor_httpHeaders>)headers body:(KmmsharedmoduleKtor_httpOutgoingContent *)body executionContext:(id<KmmsharedmoduleKotlinx_coroutines_coreJob>)executionContext attributes:(id<KmmsharedmoduleKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<KmmsharedmoduleKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmmsharedmoduleKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmmsharedmoduleKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KmmsharedmoduleKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KmmsharedmoduleKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmmsharedmoduleKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KmmsharedmoduleKtor_client_coreHttpResponseData : KmmsharedmoduleBase
- (instancetype)initWithStatusCode:(KmmsharedmoduleKtor_httpHttpStatusCode *)statusCode requestTime:(KmmsharedmoduleKtor_utilsGMTDate *)requestTime headers:(id<KmmsharedmoduleKtor_httpHeaders>)headers version:(KmmsharedmoduleKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KmmsharedmoduleKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KmmsharedmoduleKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KmmsharedmoduleKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmmsharedmoduleKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmmsharedmoduleKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KmmsharedmoduleKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KmmsharedmoduleKtor_client_coreProxyConfig : KmmsharedmoduleBase
- (instancetype)initWithUrl:(KmmsharedmoduleKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmsharedmoduleKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmmsharedmoduleKotlinNothing : KmmsharedmoduleBase
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol KmmsharedmoduleKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(KmmsharedmoduleKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) KmmsharedmoduleKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface KmmsharedmoduleKtor_utilsStringValuesBuilder : KmmsharedmoduleBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmmsharedmoduleKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmmsharedmoduleKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmmsharedmoduleKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmmsharedmoduleKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) KmmsharedmoduleMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KmmsharedmoduleKtor_httpHeadersBuilder : KmmsharedmoduleKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KmmsharedmoduleKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface KmmsharedmoduleKtor_client_coreHttpRequestBuilderCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KmmsharedmoduleKtor_httpURLBuilder : KmmsharedmoduleBase
- (instancetype)initWithProtocol:(KmmsharedmoduleKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(KmmsharedmoduleKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (KmmsharedmoduleKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (KmmsharedmoduleKtor_httpURLBuilder *)pathComponents:(KmmsharedmoduleKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (KmmsharedmoduleKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) KmmsharedmoduleKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property KmmsharedmoduleKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreJob <KmmsharedmoduleKotlinCoroutineContextElement>
@required
- (id<KmmsharedmoduleKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KmmsharedmoduleKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(KmmsharedmoduleKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (KmmsharedmoduleKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<KmmsharedmoduleKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KmmsharedmoduleKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<KmmsharedmoduleKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KmmsharedmoduleKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(KmmsharedmoduleKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<KmmsharedmoduleKotlinx_coroutines_coreJob>)plusOther_:(id<KmmsharedmoduleKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<KmmsharedmoduleKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<KmmsharedmoduleKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KmmsharedmoduleKtor_httpHttpMethod : KmmsharedmoduleBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (KmmsharedmoduleKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface KmmsharedmoduleKtor_client_coreHttpClientCallCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KmmsharedmoduleKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(KmmsharedmoduleKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(KmmsharedmoduleLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(KmmsharedmoduleKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(KmmsharedmoduleLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KmmsharedmoduleKtor_ioIoBuffer *)dst completionHandler:(void (^)(KmmsharedmoduleInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(KmmsharedmoduleKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(KmmsharedmoduleInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(KmmsharedmoduleInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(KmmsharedmoduleInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(KmmsharedmoduleBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(KmmsharedmoduleByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(KmmsharedmoduleDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(KmmsharedmoduleFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KmmsharedmoduleKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(KmmsharedmoduleKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(KmmsharedmoduleKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(KmmsharedmoduleKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(KmmsharedmoduleKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(KmmsharedmoduleKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(KmmsharedmoduleInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(KmmsharedmoduleLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(KmmsharedmoduleKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(KmmsharedmoduleKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<KmmsharedmoduleKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(KmmsharedmoduleShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<KmmsharedmoduleKotlinSuspendFunction1>)consumer completionHandler:(void (^)(KmmsharedmoduleKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<KmmsharedmoduleKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(KmmsharedmoduleBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) KmmsharedmoduleKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property KmmsharedmoduleKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol KmmsharedmoduleKtor_utilsTypeInfo
@required
@property (readonly) id<KmmsharedmoduleKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KmmsharedmoduleKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<KmmsharedmoduleKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface KmmsharedmoduleKtor_client_coreTypeInfo : KmmsharedmoduleBase <KmmsharedmoduleKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<KmmsharedmoduleKotlinKClass>)type reifiedType:(id<KmmsharedmoduleKotlinKType>)reifiedType kotlinType:(id<KmmsharedmoduleKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<KmmsharedmoduleKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<KmmsharedmoduleKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<KmmsharedmoduleKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (KmmsharedmoduleKtor_client_coreTypeInfo *)doCopyType:(id<KmmsharedmoduleKotlinKClass>)type reifiedType:(id<KmmsharedmoduleKotlinKType>)reifiedType kotlinType:(id<KmmsharedmoduleKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmmsharedmoduleKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KmmsharedmoduleKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<KmmsharedmoduleKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KmmsharedmoduleKtor_httpHttpMessage
@required
@property (readonly) id<KmmsharedmoduleKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KmmsharedmoduleKtor_client_coreHttpRequest <KmmsharedmoduleKtor_httpHttpMessage, KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<KmmsharedmoduleKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) KmmsharedmoduleKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmmsharedmoduleKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KmmsharedmoduleKtor_client_coreHttpResponse : KmmsharedmoduleBase <KmmsharedmoduleKtor_httpHttpMessage, KmmsharedmoduleKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmsharedmoduleKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<KmmsharedmoduleKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) KmmsharedmoduleKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmmsharedmoduleKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) KmmsharedmoduleKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KmmsharedmoduleKtor_utilsAttributeKey<T> : KmmsharedmoduleBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KmmsharedmoduleKtor_utilsPipelinePhase : KmmsharedmoduleBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol KmmsharedmoduleKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KmmsharedmoduleKotlinSuspendFunction2 <KmmsharedmoduleKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface KmmsharedmoduleKtor_client_coreHttpReceivePipelinePhases : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface KmmsharedmoduleKtor_client_coreHttpRequestPipelinePhases : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface KmmsharedmoduleKtor_client_coreHttpResponsePipelinePhases : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KmmsharedmoduleKtor_client_coreHttpResponseContainer : KmmsharedmoduleBase
- (instancetype)initWithExpectedType:(id<KmmsharedmoduleKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(KmmsharedmoduleKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (KmmsharedmoduleKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (KmmsharedmoduleKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KmmsharedmoduleKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmsharedmoduleKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface KmmsharedmoduleKtor_client_coreHttpSendPipelinePhases : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) KmmsharedmoduleKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmmsharedmoduleKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KmmsharedmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmmsharedmoduleKotlinx_serialization_coreSerializersModule : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<KmmsharedmoduleKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmmsharedmoduleKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmmsharedmoduleKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmsharedmoduleKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmsharedmoduleKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmmsharedmoduleKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmmsharedmoduleKotlinx_serialization_coreSerialKind : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmmsharedmoduleKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KmmsharedmoduleKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KmmsharedmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KmmsharedmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KmmsharedmoduleKtor_httpUrl : KmmsharedmoduleBase
- (instancetype)initWithProtocol:(KmmsharedmoduleKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<KmmsharedmoduleKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (KmmsharedmoduleKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<KmmsharedmoduleKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (KmmsharedmoduleKtor_httpUrl *)doCopyProtocol:(KmmsharedmoduleKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<KmmsharedmoduleKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KmmsharedmoduleKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KmmsharedmoduleKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KmmsharedmoduleKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmmsharedmoduleKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KmmsharedmoduleKtor_httpHeaders <KmmsharedmoduleKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KmmsharedmoduleKtor_httpOutgoingContent : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(KmmsharedmoduleKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) KmmsharedmoduleLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) KmmsharedmoduleKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<KmmsharedmoduleKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KmmsharedmoduleKtor_httpHttpStatusCode : KmmsharedmoduleBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmmsharedmoduleKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (KmmsharedmoduleKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KmmsharedmoduleKtor_utilsGMTDate : KmmsharedmoduleBase <KmmsharedmoduleKotlinComparable>
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmmsharedmoduleKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (KmmsharedmoduleKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (KmmsharedmoduleKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (KmmsharedmoduleKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmmsharedmoduleKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmmsharedmoduleKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KmmsharedmoduleKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KmmsharedmoduleKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KmmsharedmoduleKtor_httpHttpProtocolVersion : KmmsharedmoduleBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (KmmsharedmoduleKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol KmmsharedmoduleKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KmmsharedmoduleKtor_httpURLProtocol : KmmsharedmoduleBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (KmmsharedmoduleKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface KmmsharedmoduleKtor_httpParametersBuilder : KmmsharedmoduleKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(KmmsharedmoduleKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KmmsharedmoduleKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property KmmsharedmoduleKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface KmmsharedmoduleKtor_httpURLBuilderCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreChildHandle <KmmsharedmoduleKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(KmmsharedmoduleKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<KmmsharedmoduleKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreChildJob <KmmsharedmoduleKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<KmmsharedmoduleKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KmmsharedmoduleKotlinUnit : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol KmmsharedmoduleKotlinSequence
@required
- (id<KmmsharedmoduleKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<KmmsharedmoduleKotlinx_coroutines_coreSelectInstance>)select block:(id<KmmsharedmoduleKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KmmsharedmoduleKtor_httpHttpMethodCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<KmmsharedmoduleKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KmmsharedmoduleKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface KmmsharedmoduleKtor_ioMemory : KmmsharedmoduleBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(KmmsharedmoduleKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(KmmsharedmoduleKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (KmmsharedmoduleKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (KmmsharedmoduleKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface KmmsharedmoduleKtor_ioBuffer : KmmsharedmoduleBase
- (instancetype)initWithMemory:(KmmsharedmoduleKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (KmmsharedmoduleKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(KmmsharedmoduleKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) KmmsharedmoduleKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface KmmsharedmoduleKtor_ioChunkBuffer : KmmsharedmoduleKtor_ioBuffer
- (instancetype)initWithMemory:(KmmsharedmoduleKtor_ioMemory *)memory origin:(KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<KmmsharedmoduleKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(KmmsharedmoduleKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (KmmsharedmoduleKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<KmmsharedmoduleKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) KmmsharedmoduleKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) KmmsharedmoduleKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol KmmsharedmoduleKtor_ioInput <KmmsharedmoduleKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(KmmsharedmoduleKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property KmmsharedmoduleKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol KmmsharedmoduleKotlinAppendable
@required
- (id<KmmsharedmoduleKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<KmmsharedmoduleKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<KmmsharedmoduleKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol KmmsharedmoduleKtor_ioOutput <KmmsharedmoduleKotlinAppendable, KmmsharedmoduleKtor_ioCloseable>
@required
- (id<KmmsharedmoduleKotlinAppendable>)appendCsq:(KmmsharedmoduleKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property KmmsharedmoduleKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface KmmsharedmoduleKtor_ioIoBuffer : KmmsharedmoduleKtor_ioChunkBuffer <KmmsharedmoduleKtor_ioInput, KmmsharedmoduleKtor_ioOutput>
- (instancetype)initWithMemory:(KmmsharedmoduleKtor_ioMemory *)memory origin:(KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(KmmsharedmoduleKtor_ioMemory *)memory origin:(KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<KmmsharedmoduleKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<KmmsharedmoduleKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<KmmsharedmoduleKotlinAppendable>)appendCsq:(KmmsharedmoduleKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<KmmsharedmoduleKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<KmmsharedmoduleKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(KmmsharedmoduleKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (KmmsharedmoduleKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (KmmsharedmoduleKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(KmmsharedmoduleKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(KmmsharedmoduleInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<KmmsharedmoduleKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(KmmsharedmoduleInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property KmmsharedmoduleKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmmsharedmoduleKotlinByteArray : KmmsharedmoduleBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmmsharedmoduleByte *(^)(KmmsharedmoduleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmmsharedmoduleKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface KmmsharedmoduleKtor_ioAbstractInput : KmmsharedmoduleBase <KmmsharedmoduleKtor_ioInput>
- (instancetype)initWithHead:(KmmsharedmoduleKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmmsharedmoduleKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(KmmsharedmoduleKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(KmmsharedmoduleKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(KmmsharedmoduleKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(KmmsharedmoduleKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<KmmsharedmoduleKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<KmmsharedmoduleKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property KmmsharedmoduleKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<KmmsharedmoduleKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface KmmsharedmoduleKtor_ioByteReadPacketBase : KmmsharedmoduleKtor_ioAbstractInput
- (instancetype)initWithHead:(KmmsharedmoduleKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmmsharedmoduleKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface KmmsharedmoduleKtor_ioByteReadPacketPlatformBase : KmmsharedmoduleKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(KmmsharedmoduleKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmmsharedmoduleKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface KmmsharedmoduleKtor_ioByteReadPacket : KmmsharedmoduleKtor_ioByteReadPacketPlatformBase <KmmsharedmoduleKtor_ioInput>
- (instancetype)initWithHead:(KmmsharedmoduleKtor_ioChunkBuffer *)head pool:(id<KmmsharedmoduleKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(KmmsharedmoduleKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<KmmsharedmoduleKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (KmmsharedmoduleKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (KmmsharedmoduleKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(KmmsharedmoduleKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol KmmsharedmoduleKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (KmmsharedmoduleKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol KmmsharedmoduleKotlinSuspendFunction1 <KmmsharedmoduleKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface KmmsharedmoduleKtor_ioByteOrder : KmmsharedmoduleKotlinEnum<KmmsharedmoduleKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmsharedmoduleKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) KmmsharedmoduleKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol KmmsharedmoduleKotlinKType
@required
@property (readonly) NSArray<KmmsharedmoduleKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<KmmsharedmoduleKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmmsharedmoduleKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KmmsharedmoduleKotlinKClass>)kClass provider:(id<KmmsharedmoduleKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmmsharedmoduleKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KmmsharedmoduleKotlinKClass>)kClass serializer:(id<KmmsharedmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KmmsharedmoduleKotlinKClass>)baseClass actualClass:(id<KmmsharedmoduleKotlinKClass>)actualClass actualSerializer:(id<KmmsharedmoduleKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KmmsharedmoduleKotlinKClass>)baseClass defaultSerializerProvider:(id<KmmsharedmoduleKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol KmmsharedmoduleKtor_httpParameters <KmmsharedmoduleKtor_utilsStringValues>
@required
@property (readonly) KmmsharedmoduleKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KmmsharedmoduleKtor_httpUrlCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KmmsharedmoduleKtor_httpHeaderValueWithParameters : KmmsharedmoduleBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmmsharedmoduleKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KmmsharedmoduleKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KmmsharedmoduleKtor_httpContentType : KmmsharedmoduleKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KmmsharedmoduleKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmmsharedmoduleKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(KmmsharedmoduleKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (KmmsharedmoduleKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (KmmsharedmoduleKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface KmmsharedmoduleKtor_httpHttpStatusCodeCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) KmmsharedmoduleKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<KmmsharedmoduleKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface KmmsharedmoduleKtor_utilsGMTDateCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KmmsharedmoduleKtor_utilsWeekDay : KmmsharedmoduleKotlinEnum<KmmsharedmoduleKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmsharedmoduleKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KmmsharedmoduleKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KmmsharedmoduleKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KmmsharedmoduleKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KmmsharedmoduleKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KmmsharedmoduleKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KmmsharedmoduleKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KmmsharedmoduleKtor_utilsMonth : KmmsharedmoduleKotlinEnum<KmmsharedmoduleKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmsharedmoduleKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KmmsharedmoduleKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface KmmsharedmoduleKtor_httpHttpProtocolVersionCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (KmmsharedmoduleKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KmmsharedmoduleKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) KmmsharedmoduleKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) KmmsharedmoduleKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) KmmsharedmoduleKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) KmmsharedmoduleKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KmmsharedmoduleKtor_httpURLProtocolCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) KmmsharedmoduleKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) KmmsharedmoduleKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) KmmsharedmoduleKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) KmmsharedmoduleKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) KmmsharedmoduleKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, KmmsharedmoduleKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface KmmsharedmoduleKtor_httpUrlEncodingOption : KmmsharedmoduleKotlinEnum<KmmsharedmoduleKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmsharedmoduleKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) KmmsharedmoduleKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) KmmsharedmoduleKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) KmmsharedmoduleKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (KmmsharedmoduleKotlinArray<KmmsharedmoduleKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreParentJob <KmmsharedmoduleKotlinx_coroutines_coreJob>
@required
- (KmmsharedmoduleKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KmmsharedmoduleKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<KmmsharedmoduleKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(KmmsharedmoduleKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(KmmsharedmoduleKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<KmmsharedmoduleKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol KmmsharedmoduleKotlinSuspendFunction0 <KmmsharedmoduleKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface KmmsharedmoduleKtor_ioMemoryCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface KmmsharedmoduleKtor_ioBufferCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol KmmsharedmoduleKtor_ioObjectPool <KmmsharedmoduleKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface KmmsharedmoduleKtor_ioChunkBufferCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<KmmsharedmoduleKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<KmmsharedmoduleKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface KmmsharedmoduleKotlinCharArray : KmmsharedmoduleBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(KmmsharedmoduleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmmsharedmoduleKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface KmmsharedmoduleKtor_ioIoBufferCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<KmmsharedmoduleKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<KmmsharedmoduleKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<KmmsharedmoduleKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KmmsharedmoduleKotlinByteIterator : KmmsharedmoduleBase <KmmsharedmoduleKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmmsharedmoduleByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface KmmsharedmoduleKtor_ioAbstractInputCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface KmmsharedmoduleKtor_ioByteReadPacketBaseCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface KmmsharedmoduleKtor_ioByteReadPacketCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmsharedmoduleKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface KmmsharedmoduleKtor_ioByteOrderCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KmmsharedmoduleKotlinKTypeProjection : KmmsharedmoduleBase
- (instancetype)initWithVariance:(KmmsharedmoduleKotlinKVariance * _Nullable)variance type:(id<KmmsharedmoduleKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmsharedmoduleKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KmmsharedmoduleKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<KmmsharedmoduleKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (KmmsharedmoduleKotlinKTypeProjection *)doCopyVariance:(KmmsharedmoduleKotlinKVariance * _Nullable)variance type:(id<KmmsharedmoduleKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmmsharedmoduleKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KmmsharedmoduleKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KmmsharedmoduleKtor_httpHeaderValueParam : KmmsharedmoduleBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmmsharedmoduleKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KmmsharedmoduleKtor_httpHeaderValueWithParametersCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KmmsharedmoduleKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KmmsharedmoduleKtor_httpContentTypeCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) KmmsharedmoduleKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface KmmsharedmoduleKtor_utilsWeekDayCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KmmsharedmoduleKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface KmmsharedmoduleKtor_utilsMonthCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (KmmsharedmoduleKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface KmmsharedmoduleKotlinx_coroutines_coreAtomicDesc : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface KmmsharedmoduleKotlinCharIterator : KmmsharedmoduleBase <KmmsharedmoduleKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KmmsharedmoduleKotlinKVariance : KmmsharedmoduleKotlinEnum<KmmsharedmoduleKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmsharedmoduleKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KmmsharedmoduleKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KmmsharedmoduleKotlinKVariance *out __attribute__((swift_name("out")));
+ (KmmsharedmoduleKotlinArray<KmmsharedmoduleKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KmmsharedmoduleKotlinKTypeProjectionCompanion : KmmsharedmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmsharedmoduleKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (KmmsharedmoduleKotlinKTypeProjection *)contravariantType:(id<KmmsharedmoduleKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (KmmsharedmoduleKotlinKTypeProjection *)covariantType:(id<KmmsharedmoduleKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (KmmsharedmoduleKotlinKTypeProjection *)invariantType:(id<KmmsharedmoduleKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KmmsharedmoduleKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<__contravariant T> : KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode : KmmsharedmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(KmmsharedmoduleBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(KmmsharedmoduleBoolean *(^)(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(KmmsharedmoduleBoolean *(^)(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(KmmsharedmoduleBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(KmmsharedmoduleBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : KmmsharedmoduleKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(KmmsharedmoduleKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(KmmsharedmoduleKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) KmmsharedmoduleKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
