// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Firestore API (firestore/v1)
// Documentation:
//   https://cloud.google.com/firestore

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirestore_GoogleFirestoreAdminV1beta1Progress;
@class GTLRFirestore_GoogleFirestoreAdminV1beta2Index;
@class GTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta;
@class GTLRFirestore_GoogleFirestoreAdminV1beta2IndexField;
@class GTLRFirestore_GoogleFirestoreAdminV1beta2Progress;
@class GTLRFirestore_Location;
@class GTLRFirestore_Location_Labels;
@class GTLRFirestore_Location_Metadata;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata.operationState

/**
 *  Request has finished being cancelled after user called
 *  google.longrunning.Operations.CancelOperation.
 *
 *  Value: "CANCELLED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Cancelled;
/**
 *  Request is in the process of being cancelled after user called
 *  google.longrunning.Operations.CancelOperation on the operation.
 *
 *  Value: "CANCELLING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Cancelling;
/**
 *  Request has finished being processed, but encountered an error.
 *
 *  Value: "FAILED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Failed;
/**
 *  Request has been processed and is in its finalization stage.
 *
 *  Value: "FINALIZING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Finalizing;
/**
 *  Request is being prepared for processing.
 *
 *  Value: "INITIALIZING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Initializing;
/**
 *  Request is actively being processed.
 *
 *  Value: "PROCESSING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Processing;
/**
 *  Unspecified.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_StateUnspecified;
/**
 *  Request has completed successfully.
 *
 *  Value: "SUCCESSFUL"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Successful;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata.operationState

/**
 *  Request has finished being cancelled after user called
 *  google.longrunning.Operations.CancelOperation.
 *
 *  Value: "CANCELLED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Cancelled;
/**
 *  Request is in the process of being cancelled after user called
 *  google.longrunning.Operations.CancelOperation on the operation.
 *
 *  Value: "CANCELLING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Cancelling;
/**
 *  Request has finished being processed, but encountered an error.
 *
 *  Value: "FAILED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Failed;
/**
 *  Request has been processed and is in its finalization stage.
 *
 *  Value: "FINALIZING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Finalizing;
/**
 *  Request is being prepared for processing.
 *
 *  Value: "INITIALIZING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Initializing;
/**
 *  Request is actively being processed.
 *
 *  Value: "PROCESSING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Processing;
/**
 *  Unspecified.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_StateUnspecified;
/**
 *  Request has completed successfully.
 *
 *  Value: "SUCCESSFUL"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Successful;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta1IndexOperationMetadata.operationType

/**
 *  The operation is creating the index. Initiated by a `CreateIndex` call.
 *
 *  Value: "CREATING_INDEX"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1IndexOperationMetadata_OperationType_CreatingIndex;
/**
 *  Unspecified. Never set by server.
 *
 *  Value: "OPERATION_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta1IndexOperationMetadata_OperationType_OperationTypeUnspecified;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata.state

/**
 *  Request has finished being cancelled after user called
 *  google.longrunning.Operations.CancelOperation.
 *
 *  Value: "CANCELLED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Cancelled;
/**
 *  Request is in the process of being cancelled after user called
 *  google.longrunning.Operations.CancelOperation on the operation.
 *
 *  Value: "CANCELLING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Cancelling;
/**
 *  Request has finished being processed, but encountered an error.
 *
 *  Value: "FAILED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Failed;
/**
 *  Request has been processed and is in its finalization stage.
 *
 *  Value: "FINALIZING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Finalizing;
/**
 *  Request is being prepared for processing.
 *
 *  Value: "INITIALIZING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Initializing;
/**
 *  Unspecified.
 *
 *  Value: "OPERATION_STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_OperationStateUnspecified;
/**
 *  Request is actively being processed.
 *
 *  Value: "PROCESSING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Processing;
/**
 *  Request has completed successfully.
 *
 *  Value: "SUCCESSFUL"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Successful;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta2Index.queryScope

/**
 *  Indexes with a collection query scope specified allow queries
 *  against a collection that is the child of a specific document, specified
 *  at query time, and that has the collection id specified by the index.
 *
 *  Value: "COLLECTION"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_QueryScope_Collection;
/**
 *  The query scope is unspecified. Not a valid option.
 *
 *  Value: "QUERY_SCOPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_QueryScope_QueryScopeUnspecified;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta2Index.state

/**
 *  The index is being created.
 *  There is an active long-running operation for the index.
 *  The index is updated when writing a document.
 *  Some index data may exist.
 *
 *  Value: "CREATING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_Creating;
/**
 *  The index was being created, but something went wrong.
 *  There is no active long-running operation for the index,
 *  and the most recently finished long-running operation failed.
 *  The index is not updated when writing a document.
 *  Some index data may exist.
 *  Use the google.longrunning.Operations API to determine why the operation
 *  that last attempted to create this index failed, then re-create the
 *  index.
 *
 *  Value: "NEEDS_REPAIR"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_NeedsRepair;
/**
 *  The index is ready to be used.
 *  The index is updated when writing a document.
 *  The index is fully populated from all stored documents it applies to.
 *
 *  Value: "READY"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_Ready;
/**
 *  The state is unspecified.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_StateUnspecified;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta.changeType

/**
 *  The single field index is being added.
 *
 *  Value: "ADD"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta_ChangeType_Add;
/**
 *  The type of change is not specified or known.
 *
 *  Value: "CHANGE_TYPE_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta_ChangeType_ChangeTypeUnspecified;
/**
 *  The single field index is being removed.
 *
 *  Value: "REMOVE"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta_ChangeType_Remove;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta2IndexField.arrayConfig

/**
 *  The index does not support additional array queries.
 *
 *  Value: "ARRAY_CONFIG_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_ArrayConfig_ArrayConfigUnspecified;
/**
 *  The index supports array containment queries.
 *
 *  Value: "CONTAINS"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_ArrayConfig_Contains;

// ----------------------------------------------------------------------------
// GTLRFirestore_GoogleFirestoreAdminV1beta2IndexField.order

/**
 *  The field is ordered by ascending field value.
 *
 *  Value: "ASCENDING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_Order_Ascending;
/**
 *  The field is ordered by descending field value.
 *
 *  Value: "DESCENDING"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_Order_Descending;
/**
 *  The ordering is unspecified. Not a valid option.
 *
 *  Value: "ORDER_UNSPECIFIED"
 */
GTLR_EXTERN NSString * const kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_Order_OrderUnspecified;

/**
 *  Metadata for ExportDocuments operations.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata : GTLRObject

/** Which collection ids are being exported. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *collectionIds;

/**
 *  The time the operation ended, either successfully or otherwise. Unset if
 *  the operation is still active.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  The state of the export operation.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Cancelled
 *        Request has finished being cancelled after user called
 *        google.longrunning.Operations.CancelOperation. (Value: "CANCELLED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Cancelling
 *        Request is in the process of being cancelled after user called
 *        google.longrunning.Operations.CancelOperation on the operation.
 *        (Value: "CANCELLING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Failed
 *        Request has finished being processed, but encountered an error.
 *        (Value: "FAILED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Finalizing
 *        Request has been processed and is in its finalization stage. (Value:
 *        "FINALIZING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Initializing
 *        Request is being prepared for processing. (Value: "INITIALIZING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Processing
 *        Request is actively being processed. (Value: "PROCESSING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_StateUnspecified
 *        Unspecified. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsMetadata_OperationState_Successful
 *        Request has completed successfully. (Value: "SUCCESSFUL")
 */
@property(nonatomic, copy, nullable) NSString *operationState;

/** Where the entities are being exported to. */
@property(nonatomic, copy, nullable) NSString *outputUriPrefix;

/** An estimate of the number of bytes processed. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta1Progress *progressBytes;

/** An estimate of the number of documents processed. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta1Progress *progressDocuments;

/** The time that work began on the operation. */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

@end


/**
 *  Returned in the google.longrunning.Operation response field.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta1ExportDocumentsResponse : GTLRObject

/**
 *  Location of the output files. This can be used to begin an import
 *  into Cloud Firestore (this project or another project) after the operation
 *  completes successfully.
 */
@property(nonatomic, copy, nullable) NSString *outputUriPrefix;

@end


/**
 *  Metadata for ImportDocuments operations.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata : GTLRObject

/** Which collection ids are being imported. */
@property(nonatomic, strong, nullable) NSArray<NSString *> *collectionIds;

/**
 *  The time the operation ended, either successfully or otherwise. Unset if
 *  the operation is still active.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/** The location of the documents being imported. */
@property(nonatomic, copy, nullable) NSString *inputUriPrefix;

/**
 *  The state of the import operation.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Cancelled
 *        Request has finished being cancelled after user called
 *        google.longrunning.Operations.CancelOperation. (Value: "CANCELLED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Cancelling
 *        Request is in the process of being cancelled after user called
 *        google.longrunning.Operations.CancelOperation on the operation.
 *        (Value: "CANCELLING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Failed
 *        Request has finished being processed, but encountered an error.
 *        (Value: "FAILED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Finalizing
 *        Request has been processed and is in its finalization stage. (Value:
 *        "FINALIZING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Initializing
 *        Request is being prepared for processing. (Value: "INITIALIZING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Processing
 *        Request is actively being processed. (Value: "PROCESSING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_StateUnspecified
 *        Unspecified. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1ImportDocumentsMetadata_OperationState_Successful
 *        Request has completed successfully. (Value: "SUCCESSFUL")
 */
@property(nonatomic, copy, nullable) NSString *operationState;

/** An estimate of the number of bytes processed. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta1Progress *progressBytes;

/** An estimate of the number of documents processed. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta1Progress *progressDocuments;

/** The time that work began on the operation. */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

@end


/**
 *  Metadata for index operations. This metadata populates
 *  the metadata field of google.longrunning.Operation.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta1IndexOperationMetadata : GTLRObject

/**
 *  True if the [google.longrunning.Operation] was cancelled. If the
 *  cancellation is in progress, cancelled will be true but
 *  google.longrunning.Operation.done will be false.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *cancelled;

/** Progress of the existing operation, measured in number of documents. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta1Progress *documentProgress;

/**
 *  The time the operation ended, either successfully or otherwise. Unset if
 *  the operation is still active.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  The index resource that this operation is acting on. For example:
 *  `projects/{project_id}/databases/{database_id}/indexes/{index_id}`
 */
@property(nonatomic, copy, nullable) NSString *index;

/**
 *  The type of index operation.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1IndexOperationMetadata_OperationType_CreatingIndex
 *        The operation is creating the index. Initiated by a `CreateIndex`
 *        call. (Value: "CREATING_INDEX")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta1IndexOperationMetadata_OperationType_OperationTypeUnspecified
 *        Unspecified. Never set by server. (Value:
 *        "OPERATION_TYPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *operationType;

/** The time that work began on the operation. */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

@end


/**
 *  The metadata message for google.cloud.location.Location.metadata.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta1LocationMetadata : GTLRObject
@end


/**
 *  Measures the progress of a particular metric.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta1Progress : GTLRObject

/**
 *  An estimate of how much work has been completed. Note that this may be
 *  greater than `work_estimated`.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *workCompleted;

/**
 *  An estimate of how much work needs to be performed. Zero if the
 *  work estimate is unavailable. May change as work progresses.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *workEstimated;

@end


/**
 *  Metadata for google.longrunning.Operation results from
 *  FirestoreAdmin.UpdateField.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata : GTLRObject

/** The progress, in bytes, of this operation. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta2Progress *bytesProgress;

/** The progress, in documents, of this operation. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta2Progress *documentProgress;

/**
 *  The time this operation completed. Will be unset if operation still in
 *  progress.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *endTime;

/**
 *  The field resource that this operation is acting on. For example:
 *  `projects/{project_id}/databases/{database_id}/collectionGroups/{collection_id}/fields/{field_path}`
 */
@property(nonatomic, copy, nullable) NSString *field;

/**
 *  A list of IndexConfigDelta, which describe the intent of this
 *  operation.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta *> *indexConfigDeltas;

/** The time this operation started. */
@property(nonatomic, strong, nullable) GTLRDateTime *startTime;

/**
 *  The state of the operation.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Cancelled
 *        Request has finished being cancelled after user called
 *        google.longrunning.Operations.CancelOperation. (Value: "CANCELLED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Cancelling
 *        Request is in the process of being cancelled after user called
 *        google.longrunning.Operations.CancelOperation on the operation.
 *        (Value: "CANCELLING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Failed
 *        Request has finished being processed, but encountered an error.
 *        (Value: "FAILED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Finalizing
 *        Request has been processed and is in its finalization stage. (Value:
 *        "FINALIZING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Initializing
 *        Request is being prepared for processing. (Value: "INITIALIZING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_OperationStateUnspecified
 *        Unspecified. (Value: "OPERATION_STATE_UNSPECIFIED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Processing
 *        Request is actively being processed. (Value: "PROCESSING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2FieldOperationMetadata_State_Successful
 *        Request has completed successfully. (Value: "SUCCESSFUL")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Cloud Firestore indexes enable simple and complex queries against
 *  documents in a database.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta2Index : GTLRObject

/**
 *  The fields supported by this index.
 *  For composite indexes, this is always 2 or more fields.
 *  The last field entry is always for the field path `__name__`. If, on
 *  creation, `__name__` was not specified as the last field, it will be added
 *  automatically with the same direction as that of the last field defined. If
 *  the final field in a composite index is not directional, the `__name__`
 *  will be ordered ASCENDING (unless explicitly specified).
 *  For single field indexes, this will always be exactly one entry with a
 *  field path equal to the field path of the associated field.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirestore_GoogleFirestoreAdminV1beta2IndexField *> *fields;

/**
 *  Output only.
 *  A server defined name for this index.
 *  The form of this name for composite indexes will be:
 *  `projects/{project_id}/databases/{database_id}/collectionGroups/{collection_id}/indexes/{composite_index_id}`
 *  For single field indexes, this field will be empty.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Indexes with a collection query scope specified allow queries
 *  against a collection that is the child of a specific document, specified at
 *  query time, and that has the same collection id.
 *  Indexes with a collection group query scope specified allow queries against
 *  all collections descended from a specific document, specified at query
 *  time, and that have the same collection id as this index.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_QueryScope_Collection
 *        Indexes with a collection query scope specified allow queries
 *        against a collection that is the child of a specific document,
 *        specified
 *        at query time, and that has the collection id specified by the index.
 *        (Value: "COLLECTION")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_QueryScope_QueryScopeUnspecified
 *        The query scope is unspecified. Not a valid option. (Value:
 *        "QUERY_SCOPE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *queryScope;

/**
 *  Output only.
 *  The serving state of the index.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_Creating The
 *        index is being created.
 *        There is an active long-running operation for the index.
 *        The index is updated when writing a document.
 *        Some index data may exist. (Value: "CREATING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_NeedsRepair
 *        The index was being created, but something went wrong.
 *        There is no active long-running operation for the index,
 *        and the most recently finished long-running operation failed.
 *        The index is not updated when writing a document.
 *        Some index data may exist.
 *        Use the google.longrunning.Operations API to determine why the
 *        operation
 *        that last attempted to create this index failed, then re-create the
 *        index. (Value: "NEEDS_REPAIR")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_Ready The
 *        index is ready to be used.
 *        The index is updated when writing a document.
 *        The index is fully populated from all stored documents it applies to.
 *        (Value: "READY")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2Index_State_StateUnspecified
 *        The state is unspecified. (Value: "STATE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *state;

@end


/**
 *  Information about an index configuration change.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta : GTLRObject

/**
 *  Specifies how the index is changing.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta_ChangeType_Add
 *        The single field index is being added. (Value: "ADD")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta_ChangeType_ChangeTypeUnspecified
 *        The type of change is not specified or known. (Value:
 *        "CHANGE_TYPE_UNSPECIFIED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexConfigDelta_ChangeType_Remove
 *        The single field index is being removed. (Value: "REMOVE")
 */
@property(nonatomic, copy, nullable) NSString *changeType;

/** The index being changed. */
@property(nonatomic, strong, nullable) GTLRFirestore_GoogleFirestoreAdminV1beta2Index *index;

@end


/**
 *  A field in an index.
 *  The field_path describes which field is indexed, the value_mode describes
 *  how the field value is indexed.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta2IndexField : GTLRObject

/**
 *  Indicates that this field supports operations on `array_value`s.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_ArrayConfig_ArrayConfigUnspecified
 *        The index does not support additional array queries. (Value:
 *        "ARRAY_CONFIG_UNSPECIFIED")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_ArrayConfig_Contains
 *        The index supports array containment queries. (Value: "CONTAINS")
 */
@property(nonatomic, copy, nullable) NSString *arrayConfig;

/**
 *  Can be __name__.
 *  For single field indexes, this must match the name of the field or may
 *  be omitted.
 */
@property(nonatomic, copy, nullable) NSString *fieldPath;

/**
 *  Indicates that this field supports ordering by the specified order or
 *  comparing using =, <, <=, >, >=.
 *
 *  Likely values:
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_Order_Ascending
 *        The field is ordered by ascending field value. (Value: "ASCENDING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_Order_Descending
 *        The field is ordered by descending field value. (Value: "DESCENDING")
 *    @arg @c kGTLRFirestore_GoogleFirestoreAdminV1beta2IndexField_Order_OrderUnspecified
 *        The ordering is unspecified. Not a valid option. (Value:
 *        "ORDER_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *order;

@end


/**
 *  Describes the progress of the operation.
 *  Unit of work is generic and must be interpreted based on where Progress
 *  is used.
 */
@interface GTLRFirestore_GoogleFirestoreAdminV1beta2Progress : GTLRObject

/**
 *  The amount of work completed.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *completedWork;

/**
 *  The amount of work estimated.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *estimatedWork;

@end


/**
 *  The response message for Locations.ListLocations.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "locations" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirestore_ListLocationsResponse : GTLRCollectionObject

/**
 *  A list of locations that matches the specified filter in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirestore_Location *> *locations;

/** The standard List next-page token. */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A resource that represents Google Cloud Platform location.
 */
@interface GTLRFirestore_Location : GTLRObject

/**
 *  The friendly name for this location, typically a nearby city name.
 *  For example, "Tokyo".
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 */
@property(nonatomic, strong, nullable) GTLRFirestore_Location_Labels *labels;

/** The canonical id for this location. For example: `"us-east1"`. */
@property(nonatomic, copy, nullable) NSString *locationId;

/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 */
@property(nonatomic, strong, nullable) GTLRFirestore_Location_Metadata *metadata;

/**
 *  Resource name for the location, which may vary between implementations.
 *  For example: `"projects/example-project/locations/us-east1"`
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Cross-service attributes for the location. For example
 *  {"cloud.googleapis.com/region": "us-east1"}
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRFirestore_Location_Labels : GTLRObject
@end


/**
 *  Service-specific metadata. For example the available capacity at the given
 *  location.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirestore_Location_Metadata : GTLRObject
@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
