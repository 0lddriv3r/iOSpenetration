//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface COpenIMInfo : NSObject <PBCoding>
{
    unsigned int customInfoVisible;
    NSString *customInfo;
    NSString *openIMDescId;
    NSArray *_customItems;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(retain, nonatomic) NSString *openIMDescId; // @synthesize openIMDescId;
@property(retain, nonatomic) NSString *customInfo; // @synthesize customInfo;
@property(nonatomic) unsigned int customInfoVisible; // @synthesize customInfoVisible;
- (void).cxx_destruct;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

