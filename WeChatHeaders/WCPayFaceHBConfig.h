//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCPayFaceHBConfig : NSObject <PBCoding>
{
    unsigned long resourceVersion;
    unsigned long uiTotalCount;
    unsigned long long uiTotalMount;
}

+ (void)initialize;
@property(nonatomic) unsigned long uiTotalCount; // @synthesize uiTotalCount;
@property(nonatomic) unsigned long long uiTotalMount; // @synthesize uiTotalMount;
@property(nonatomic) unsigned long resourceVersion; // @synthesize resourceVersion;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

