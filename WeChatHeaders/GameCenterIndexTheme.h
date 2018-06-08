//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameCenterIndexTheme : MMObject <PBCoding>
{
    NSString *topBigPicUrl;
    NSString *topBigPicJumpUrl;
    NSString *topSmallPicUrl;
    unsigned long topBannerId;
    NSString *classifyBtnIconUrl;
    NSString *bottomPicUrl;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *bottomPicUrl; // @synthesize bottomPicUrl;
@property(retain, nonatomic) NSString *classifyBtnIconUrl; // @synthesize classifyBtnIconUrl;
@property(nonatomic) unsigned long topBannerId; // @synthesize topBannerId;
@property(retain, nonatomic) NSString *topSmallPicUrl; // @synthesize topSmallPicUrl;
@property(retain, nonatomic) NSString *topBigPicJumpUrl; // @synthesize topBigPicJumpUrl;
@property(retain, nonatomic) NSString *topBigPicUrl; // @synthesize topBigPicUrl;
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
