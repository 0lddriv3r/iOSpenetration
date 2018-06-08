//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIView;

@interface EditImageMosaicToolAttrView : MMUIView
{
    UIView *_line;
    UIView *_bottomLine;
    UIButton *_undoBtn;
    UIView *_vline;
    UIButton *_traditionalBtn;
    UIButton *_brushBtn;
    BOOL _enable;
    id <EditImageMosaicToolAttrDelegate> _m_delegate;
    int _selectedNumber;
}

@property(nonatomic) int selectedNumber; // @synthesize selectedNumber=_selectedNumber;
@property(nonatomic) __weak id <EditImageMosaicToolAttrDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (float)getLineWidth;
- (void)setUndoEnable:(BOOL)arg1;
- (void)onBrushBtnClicked;
- (void)onTraditionalBtnClicked;
- (void)onUndoEditImage;
- (void)layoutSubviews;
- (void)OnClickWidthButton:(id)arg1;
- (void)initBtns;
- (id)initWithFrame:(struct CGRect)arg1;

@end
