//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluLoginBaseViewController.h"

#import "UIActionSheetDelegate.h"
#import "aluAlipayLoginPageAppearance.h"
#import "aluLoginBoxDelegate.h"

@class AUGUnifyLoginRes, NSString, aluLinkButton, aluRPC;

@interface aluAlipayLoginViewController : aluLoginBaseViewController <aluAlipayLoginPageAppearance, UIActionSheetDelegate, aluLoginBoxDelegate>
{
    _Bool _isRegBtnOut;
    aluLinkButton *_smsLoginBtn;
    aluLinkButton *_findbackPwdBtn;
    aluRPC *_alipayLoginRPC;
    AUGUnifyLoginRes *_alipayLoginResult;
}

@property(nonatomic) _Bool isRegBtnOut; // @synthesize isRegBtnOut=_isRegBtnOut;
@property(retain, nonatomic) AUGUnifyLoginRes *alipayLoginResult; // @synthesize alipayLoginResult=_alipayLoginResult;
@property(retain, nonatomic) aluRPC *alipayLoginRPC; // @synthesize alipayLoginRPC=_alipayLoginRPC;
@property(retain, nonatomic) aluLinkButton *findbackPwdBtn; // @synthesize findbackPwdBtn=_findbackPwdBtn;
@property(retain, nonatomic) aluLinkButton *smsLoginBtn; // @synthesize smsLoginBtn=_smsLoginBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (void)monitorNormalRegister;
- (void)setupCommands;
- (void)arouseKeyboardOnLoginInputBox;
- (void)arouseKeyboard;
- (id)currentLoginId;
- (_Bool)showGuideTaobaoLogin;
- (id)loginButton;
- (id)viewController;
- (int)updateHeadImage;
- (void)initLoginBox;
- (_Bool)preCheck;
- (void)onLogin;
- (void)aluLoginBoxStartAnimation:(id)arg1 changeToFrame:(struct CGRect)arg2 animation:(CDUnknownBlockType)arg3;
- (void)aluLoginBox:(id)arg1 didInputBoxBeginEditing:(id)arg2;
- (void)aluLoginBoxShouldGoLogin:(id)arg1;
- (void)aluLoginBoxLoginIdTextDidEnd:(id)arg1;
- (void)aluLoginBox:(id)arg1 didOneItemSelectedAtIndex:(long long)arg2;
- (void)aluLoginBox:(id)arg1 inputAvailable:(_Bool)arg2;
- (void)aluLoginBoxHistoryListClicked:(id)arg1;
- (void)aluLoginLoginIdBox:(id)arg1 replacementString:(id)arg2;
- (void)aluLoginBoxPwdSwitchClicked:(id)arg1;
- (void)aluLoginBox:(id)arg1 didDeleteHistoryAtIndex:(long long)arg2;
- (_Bool)aluLoginBox:(id)arg1 shouldDeleteHistoryAtIndex:(long long)arg2;
- (id)aluLoginBox:(id)arg1 loginIdOfHistoryItemAtIndex:(long long)arg2;
- (void)doRegister;
- (void)smsLogin;
- (void)onRegisterBtnClick;
- (void)retrievePwd;
- (void)faceLogin;
- (void)onMore;
- (_Bool)isRegEnterOut;
- (id)drawBottomButton;
- (id)moreBtn;
- (_Bool)showSMSLoginOutsideActionsheet;
- (void)createPasswordContainerView:(double)arg1;
- (void)executeIntentWithParams:(id)arg1;
- (void)setupIntents;
- (void)setLoginId:(id)arg1 hideLoginId:(_Bool)arg2 password:(id)arg3;
- (void)setLoginId:(id)arg1 password:(id)arg2;
- (void)createSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

