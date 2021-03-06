//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIInputViewAudioFeedback.h"
#import "UIScrollViewDelegate.h"
#import "WAEmotionViewDelegate.h"

@class NSString, NSTimer, UIButton, UIImageView, UIPageControl, UIScrollView;

@interface WACustomKeyboard : UIView <WAEmotionViewDelegate, UIScrollViewDelegate, UIInputViewAudioFeedback>
{
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    id <UITextInput> _textView;
    int _maxLength;
    id <WACustomKeyboardDelegate> _delegate;
    NSTimer *_timer;
    float _height;
    UIButton *_extraButton;
    struct UIEdgeInsets _insets;
}

@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <WACustomKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) int maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (void)changePage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectedEmotionView:(id)arg1;
- (float)getHeight;
- (void)characterPressed:(id)arg1;
- (void)deletePressed:(id)arg1;
- (void)characterDeleted;
- (void)startDelete;
- (void)deleteReleased:(id)arg1;
- (void)dismissPressed:(id)arg1;
@property(readonly, nonatomic) BOOL enableInputClicksWhenVisible;
@property(retain) id <UITextInput> textView; // @synthesize textView=_textView;
- (void)setExtraKey:(id)arg1;
- (void)setup4X4Keyboard:(BOOL)arg1;
- (void)setup3X4Keyboard:(BOOL)arg1;
- (void)setupEmojiKeyboard;
- (void)setType:(int)arg1 showConfirm:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

