//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCPayUserPrivacyInfo : NSObject <PBCoding>
{
    unsigned long m_needAgreeDuty;
}

+ (id)LoadFromFile;
+ (void)initialize;
@property(nonatomic) unsigned long m_needAgreeDuty; // @synthesize m_needAgreeDuty;
@property(readonly, copy) NSString *description;
- (void)saveToFile;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
