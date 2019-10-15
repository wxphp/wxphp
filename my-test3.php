<?php

class MyApp extends wxApp
{
    private $someUnrelatedAttribute;

    public function __construct(SomeUnrelatedClass $someUnrelatedClass)
    {
        echo "MyApp::__construct()\n";

        /* A */ $this->someUnrelatedAttribute = $someUnrelatedClass->someUnrelatedValue();
        /* B */ #$this->someUnrelatedAttribute = 'foofoo'; 
        /* C */ #echo $someUnrelatedClass->someUnrelatedValue() . "\n"; 

        parent::__construct();
    }

    public function start()
    {
        echo "MyApp::start()\n";
        wxApp::SetInstance($this);

        echo "MyApp::start() - calling wxEntry\n";
        wxEntry();
    }

    public function OnInit()
    {
        echo "MyApp::OnInit()\n";
        echo "Thank you for playing!\n\n";

        echo "MyApp::OnInit() - calling wxExit\n";
        wxExit();
    }
}

class SomeUnrelatedClass
{
    public function someUnrelatedValue()
    {
        return 'barfoo';
    }
}

$someUnrelatedClass = new SomeUnrelatedClass();
$myApp = new MyApp($someUnrelatedClass);
$myApp->start();

