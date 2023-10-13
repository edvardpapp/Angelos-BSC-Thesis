/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENMENUVIEWBASE_HPP
#define SCREENMENUVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screenmenu_screen/ScreenMenuPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class ScreenMenuViewBase : public touchgfx::View<ScreenMenuPresenter>
{
public:
    ScreenMenuViewBase();
    virtual ~ScreenMenuViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void LoadDefaultParameters()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void buttonWithLabelKeyboardExitClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void flexButtonServerPortClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void flexButtonServerIpClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void flexButtonWifiSsidClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void flexButtonWifiPassClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void flexButtonDataFrequencyClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void buttonWithLabelKeyboardSaveClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void buttonConnectClicked()
    {
        // Override and implement this function in ScreenMenu
    }
    virtual void waitForConnection()
    {
        // Override and implement this function in ScreenMenu
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image Background;
    touchgfx::ScrollableContainer scrollableContainerMenu;
    touchgfx::TextButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonDataFrequency;
    touchgfx::ScrollableContainer scrollableContainerDataFrequency;
    touchgfx::Box TextAreaBackgroundDataFrequency;
    touchgfx::TextAreaWithOneWildcard textAreaDataFrequency;
    touchgfx::TextButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonWifiPass;
    touchgfx::ScrollableContainer scrollableContainerWifiPass;
    touchgfx::Box TextAreaBackgroundWifiPass;
    touchgfx::TextAreaWithOneWildcard textAreaWifiPass;
    touchgfx::TextButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonWifiSsid;
    touchgfx::ScrollableContainer scrollableContainerWifiSsid;
    touchgfx::Box TextAreaBackgroundWifiSsid;
    touchgfx::TextAreaWithOneWildcard textAreaWifiSsid;
    touchgfx::TextButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonServerIp;
    touchgfx::ScrollableContainer scrollableContainerServerIp;
    touchgfx::Box TextAreaBackgroundServerIp;
    touchgfx::TextAreaWithOneWildcard textAreaServerIp;
    touchgfx::TextButtonStyle< touchgfx::ClickButtonTrigger >  flexButtonServerPort;
    touchgfx::ScrollableContainer scrollableContainerServerPort;
    touchgfx::Box TextAreaBackgroundServerPort;
    touchgfx::TextAreaWithOneWildcard textAreaServerPort;
    touchgfx::Image imageScrollSeparator;
    touchgfx::Container containerMenuBar;
    touchgfx::Image TopBar;
    touchgfx::TextArea textAreaMenu;
    touchgfx::ButtonWithLabel buttonLoadDefault;
    touchgfx::ButtonWithLabel buttonHome;
    touchgfx::ButtonWithLabel buttonConnect;
    touchgfx::ButtonWithLabel buttonWithLabelKeyboardExit;
    touchgfx::ButtonWithLabel buttonWithLabelKeyboardSave;
    touchgfx::TextArea textAreaConnecting;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREADATAFREQUENCY_SIZE = 50;
    touchgfx::Unicode::UnicodeChar textAreaDataFrequencyBuffer[TEXTAREADATAFREQUENCY_SIZE];
    static const uint16_t TEXTAREAWIFIPASS_SIZE = 50;
    touchgfx::Unicode::UnicodeChar textAreaWifiPassBuffer[TEXTAREAWIFIPASS_SIZE];
    static const uint16_t TEXTAREAWIFISSID_SIZE = 50;
    touchgfx::Unicode::UnicodeChar textAreaWifiSsidBuffer[TEXTAREAWIFISSID_SIZE];
    static const uint16_t TEXTAREASERVERIP_SIZE = 50;
    touchgfx::Unicode::UnicodeChar textAreaServerIpBuffer[TEXTAREASERVERIP_SIZE];
    static const uint16_t TEXTAREASERVERPORT_SIZE = 50;
    touchgfx::Unicode::UnicodeChar textAreaServerPortBuffer[TEXTAREASERVERPORT_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<ScreenMenuViewBase, const touchgfx::AbstractButton&> buttonCallback;
    touchgfx::Callback<ScreenMenuViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

    /*
     * Delay Variable Declarations
     */
    static const uint16_t WAITAFTERCONNECTION_DURATION = 90;
    uint16_t waitAfterConnectionCounter;

};

#endif // SCREENMENUVIEWBASE_HPP
