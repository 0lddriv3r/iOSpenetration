//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCSnsSocialInfluenceInfo : MMObject <PBCoding>
{
    NSString *layerId;
    NSString *expId;
    int maxLikeCount;
    int maxCommentCount;
}

+ (void)initialize;
@property(nonatomic) int maxCommentCount; // @synthesize maxCommentCount;
@property(nonatomic) int maxLikeCount; // @synthesize maxLikeCount;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId;
- (void).cxx_destruct;
- (id)init;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

