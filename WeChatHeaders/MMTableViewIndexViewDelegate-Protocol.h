//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UITableView;

@protocol MMTableViewIndexViewDelegate <NSObject>
- (int)mmcurrentIndexForTableView:(UITableView *)arg1;
- (int)mmtableView:(UITableView *)arg1 sectionForSectionIndexTitle:(NSString *)arg2 atIndex:(int)arg3;
- (NSArray *)mmsectionIndexTitlesForTableView:(UITableView *)arg1;
@end

