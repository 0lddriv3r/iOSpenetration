//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface MidasIAPSecurityPolicy : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _SSLPinningMode;
    NSArray *_pinnedCertificates;
    NSString *_realDomain;
    NSArray *_pinnedPublicKeys;
}

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:(unsigned int)arg1;
+ (id)defaultPolicy;
+ (id)defaultPinnedCertificates;
@property(retain, nonatomic) NSArray *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
@property(copy, nonatomic) NSString *realDomain; // @synthesize realDomain=_realDomain;
@property(retain, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(nonatomic) unsigned int SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (BOOL)evaluateServerTrust:(struct __SecTrust *)arg1;
- (id)init;

@end

