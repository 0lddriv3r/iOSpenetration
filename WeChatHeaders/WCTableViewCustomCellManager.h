//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCTableViewCellManager.h"

@class UITableViewCell, WCTableViewCellCustomConfig;

@interface WCTableViewCustomCellManager : WCTableViewCellManager
{
    UITableViewCell *_dummy;
}

@property(retain, nonatomic) UITableViewCell *dummy; // @synthesize dummy=_dummy;
- (void).cxx_destruct;
- (float)cellHeightFor:(id)arg1;
- (void)configureCell:(id)arg1;

// Remaining properties
@property(retain, nonatomic) WCTableViewCellCustomConfig *cellConfig; // @dynamic cellConfig;

@end

