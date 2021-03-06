//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTableViewCellBaseConfig.h"

@class WCTableViewCellLeftConfig, WCTableViewCellRightConfig;

@interface WCTableViewCellNormalConfig : WCTableViewCellBaseConfig
{
    BOOL _isLoading;
    BOOL _isSelectionMode;
    WCTableViewCellLeftConfig *_leftConfig;
    WCTableViewCellRightConfig *_rightConfig;
}

@property(retain, nonatomic) WCTableViewCellRightConfig *rightConfig; // @synthesize rightConfig=_rightConfig;
@property(retain, nonatomic) WCTableViewCellLeftConfig *leftConfig; // @synthesize leftConfig=_leftConfig;
@property(nonatomic) BOOL isSelectionMode; // @synthesize isSelectionMode=_isSelectionMode;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;

@end

