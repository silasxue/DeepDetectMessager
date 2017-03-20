//
//  Created by Jesse Squires
//  http://www.jessesquires.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//


// Import all the things
#import "JSQMessages.h"
#import "DemoModelData.h"
#import "NSUserDefaults+DemoSettings.h"
#import "ChatBotVoModel.h"


@class DemoMessagesViewController;

@protocol JSQDemoViewControllerDelegate <NSObject>

- (void)didDismissJSQDemoViewController:(DemoMessagesViewController *)vc;

@end




@interface DemoMessagesViewController : JSQMessagesViewController <UISplitViewControllerDelegate,UIActionSheetDelegate,JSQMessagesComposerTextViewPasteDelegate,UIPageViewControllerDataSource>
- (IBAction)searchInformation:(id)sender;

@property (weak, nonatomic) id<JSQDemoViewControllerDelegate> delegateModal;

@property (strong, nonatomic) ChatBotVoModel *detailItem;

@property (strong, nonatomic) DemoModelData *demoData;

- (void)receiveMessagePressed:(UIBarButtonItem *)sender;

- (void)closePressed:(UIBarButtonItem *)sender;

- (void)sendUrlMessage:(NSString *)url;
- (void)alertInvalidMessage;

@property (strong,nonatomic) NSArray *sqootDealObjectsResult;
@end
