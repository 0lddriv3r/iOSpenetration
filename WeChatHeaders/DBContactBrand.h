//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"
#import "WCTColumnCoding.h"

@class NSString;

@interface DBContactBrand : NSObject <PBCoding, WCTColumnCoding>
{
    NSString *brandExternalInfo;
    NSString *brandSubscriptConfigUrl;
    unsigned long brandSubscriptionSettings;
    NSString *brandIconUrl;
    NSString *certificationInfo;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *certificationInfo; // @synthesize certificationInfo;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl;
@property(nonatomic) unsigned long brandSubscriptionSettings; // @synthesize brandSubscriptionSettings;
@property(retain, nonatomic) NSString *brandSubscriptConfigUrl; // @synthesize brandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *brandExternalInfo; // @synthesize brandExternalInfo;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
