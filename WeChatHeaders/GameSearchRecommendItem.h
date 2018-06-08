//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameSearchRecommendItem : MMObject <PBCoding>
{
    NSString *appID;
    NSString *recommendKey;
    NSString *desc;
    unsigned long actionType;
    NSString *targetUrl;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl;
@property(nonatomic) unsigned long actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *recommendKey; // @synthesize recommendKey;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
