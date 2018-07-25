// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   IAM Service Account Credentials API (iamcredentials/v1)
// Description:
//   IAM Service Account Credentials API
// Documentation:
//   https://cloud.google.com/iam/docs/creating-short-lived-service-account-credentials

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  GTLRIAMCredentials_GenerateAccessTokenRequest
 */
@interface GTLRIAMCredentials_GenerateAccessTokenRequest : GTLRObject

/**
 *  The sequence of service accounts in a delegation chain. Each service
 *  account must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on its next service account in the chain. The last service account in the
 *  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on the service account that is specified in the `name` field of the
 *  request.
 *  The delegates must have the following format:
 *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *delegates;

/**
 *  The desired lifetime duration of the access token in seconds.
 *  Must be set to a value less than or equal to 3600 (1 hour). If a value is
 *  not specified, the token's lifetime will be set to a default value of one
 *  hour.
 */
@property(nonatomic, strong, nullable) GTLRDuration *lifetime;

/**
 *  Code to identify ApiScope (OAuth scope to be precise) to be included in the
 *  OAuth token.
 *  See https://developers.google.com/identity/protocols/googlescopes for more
 *  information.
 *  At least one value required.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *scope;

@end


/**
 *  GTLRIAMCredentials_GenerateAccessTokenResponse
 */
@interface GTLRIAMCredentials_GenerateAccessTokenResponse : GTLRObject

/** The OAuth 2.0 access token. */
@property(nonatomic, copy, nullable) NSString *accessToken;

/** Token expiration time. */
@property(nonatomic, strong, nullable) GTLRDateTime *expireTime;

@end


/**
 *  GTLRIAMCredentials_GenerateIdTokenRequest
 */
@interface GTLRIAMCredentials_GenerateIdTokenRequest : GTLRObject

/**
 *  The audience for the token, such as the API or account that this token
 *  grants access to.
 */
@property(nonatomic, copy, nullable) NSString *audience;

/**
 *  The sequence of service accounts in a delegation chain. Each service
 *  account must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on its next service account in the chain. The last service account in the
 *  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on the service account that is specified in the `name` field of the
 *  request.
 *  The delegates must have the following format:
 *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *delegates;

/**
 *  Include the service account email in the token. If set to `true`, the
 *  token will contain `email` and `email_verified` claims.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *includeEmail;

@end


/**
 *  GTLRIAMCredentials_GenerateIdTokenResponse
 */
@interface GTLRIAMCredentials_GenerateIdTokenResponse : GTLRObject

/** The OpenId Connect ID token. */
@property(nonatomic, copy, nullable) NSString *token;

@end


/**
 *  GTLRIAMCredentials_SignBlobRequest
 */
@interface GTLRIAMCredentials_SignBlobRequest : GTLRObject

/**
 *  The sequence of service accounts in a delegation chain. Each service
 *  account must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on its next service account in the chain. The last service account in the
 *  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on the service account that is specified in the `name` field of the
 *  request.
 *  The delegates must have the following format:
 *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *delegates;

/**
 *  The bytes to sign.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *payload;

@end


/**
 *  GTLRIAMCredentials_SignBlobResponse
 */
@interface GTLRIAMCredentials_SignBlobResponse : GTLRObject

/** The ID of the key used to sign the blob. */
@property(nonatomic, copy, nullable) NSString *keyId;

/**
 *  The signed blob.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *signedBlob;

@end


/**
 *  GTLRIAMCredentials_SignJwtRequest
 */
@interface GTLRIAMCredentials_SignJwtRequest : GTLRObject

/**
 *  The sequence of service accounts in a delegation chain. Each service
 *  account must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on its next service account in the chain. The last service account in the
 *  chain must be granted the `roles/iam.serviceAccountTokenCreator` role
 *  on the service account that is specified in the `name` field of the
 *  request.
 *  The delegates must have the following format:
 *  `projects/-/serviceAccounts/{ACCOUNT_EMAIL_OR_UNIQUEID}`
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *delegates;

/** The JWT payload to sign: a JSON object that contains a JWT Claims Set. */
@property(nonatomic, copy, nullable) NSString *payload;

@end


/**
 *  GTLRIAMCredentials_SignJwtResponse
 */
@interface GTLRIAMCredentials_SignJwtResponse : GTLRObject

/** The ID of the key used to sign the JWT. */
@property(nonatomic, copy, nullable) NSString *keyId;

/** The signed JWT. */
@property(nonatomic, copy, nullable) NSString *signedJwt;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
