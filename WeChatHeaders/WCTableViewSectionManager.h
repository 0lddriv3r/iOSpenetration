//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UITableView, UIView;

@interface WCTableViewSectionManager : NSObject
{
    unsigned int _cellMode;
    NSString *_headerTitle;
    NSString *_footerTitle;
    UIView *_headerView;
    UIView *_footerView;
    UITableView *_tableView;
    NSMutableArray *_cells;
}

+ (id)sectionWithHeaderView:(id)arg1 FooterView:(id)arg2;
+ (id)sectionWithFooterView:(id)arg1;
+ (id)sectionWithHeaderView:(id)arg1;
+ (id)sectionWithHeader:(id)arg1 Footer:(id)arg2;
+ (id)sectionWithFooter:(id)arg1;
+ (id)sectionWithHeader:(id)arg1;
+ (id)defaultSection;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic) unsigned int cellMode; // @synthesize cellMode=_cellMode;
- (void).cxx_destruct;
- (id)makeViewWith:(id)arg1 topPading:(float)arg2 bottomPadding:(float)arg3;
- (void)didBeClickedAt:(id)arg1;
- (void)addCell:(id)arg1;
- (id)init;

@end

