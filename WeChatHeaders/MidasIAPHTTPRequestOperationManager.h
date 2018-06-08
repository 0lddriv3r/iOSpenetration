//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MidasIAPHTTPRequestSerializer<MidasIAPURLRequestSerialization>, MidasIAPHTTPResponseSerializer<MidasIAPURLResponseSerialization>, MidasIAPSecurityPolicy, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue, NSURL, NSURLCredential;

@interface MidasIAPHTTPRequestOperationManager : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _shouldUseCredentialStorage;
    NSURL *_baseURL;
    MidasIAPHTTPRequestSerializer<MidasIAPURLRequestSerialization> *_requestSerializer;
    MidasIAPHTTPResponseSerializer<MidasIAPURLResponseSerialization> *_responseSerializer;
    NSOperationQueue *_operationQueue;
    NSURLCredential *_credential;
    MidasIAPSecurityPolicy *_securityPolicy;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
}

+ (BOOL)supportsSecureCoding;
+ (id)manager;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *completionGroup; // @synthesize completionGroup=_completionGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) MidasIAPSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(nonatomic) BOOL shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) MidasIAPHTTPResponseSerializer<MidasIAPURLResponseSerialization> *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain, nonatomic) MidasIAPHTTPRequestSerializer<MidasIAPURLRequestSerialization> *requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)HTTPRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)HTTPRequestOperationWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

@end
