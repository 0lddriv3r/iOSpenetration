//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface SignGiftData : MMObject <PBCoding>
{
    NSString *iconUrl;
    unsigned long state;
    unsigned long width;
    unsigned long height;
}

+ (void)initialize;
@property(nonatomic) unsigned long height; // @synthesize height;
@property(nonatomic) unsigned long width; // @synthesize width;
@property(nonatomic) unsigned long state; // @synthesize state;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (const map_69681069 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

