//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, NSArray, UIView;

@protocol WNArticleControllerDelegate <NSObject>

@optional
- (void)onClickCellShowStopRecordingAlert;
- (void)onShowRecordingAlert;
- (void)onNoteSecurityCheckFail;
- (void)onNoteSecurityCheckOK;
- (void)onEdited;
- (void)onDownloadHtmlExpire;
- (void)onDownloadHtmlFail;
- (void)onShowFullToolbar;
- (void)hideToolbarView;
- (void)reloadRightBarBtn;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)onTxtInfoTextLengthExceed;
- (void)onNoneTxtInfoNumExceed;
- (void)onSelectObjectView:(UIView *)arg1;
- (void)onSelectAllViewToShow;
- (void)onSelectParaTextForEditing:(struct _NSRange)arg1;
- (MMUIViewController *)getViewController;
- (BOOL)isCellVisible:(int)arg1;
- (void)hasLoadAllParaInfo;
- (void)reloadAll;
- (void)setBecomeFirstResponse:(int)arg1;
- (void)scrollToIndex:(int)arg1 atScrollPosition:(int)arg2;
- (void)scrollToIndex:(int)arg1;
- (void)reloadRowsAtIndexArray:(NSArray *)arg1;
- (void)reloadRowAtIndex:(int)arg1;
- (void)resizeCellViewAtIndex:(int)arg1;
- (void)deleteRowAtIndex:(int)arg1;
- (void)insertNewRowAtIndex:(int)arg1 withCount:(int)arg2;
- (void)insertNewRowAtIndex:(int)arg1;
@end

