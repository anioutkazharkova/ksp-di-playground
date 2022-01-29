package com.example.movies.ui

import android.content.Context
import android.os.Bundle
import android.view.MotionEvent
import android.view.inputmethod.InputMethodManager
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.LiveData
import androidx.viewpager.widget.ViewPager
import com.example.movies.ui.adapter.SectionsPagerAdapter
import com.example.testksp.R
import com.google.android.material.tabs.TabLayout
//import dagger.hilt.android.AndroidEntryPoint
/*
@Mockable
interface  ITest {
    fun hello()
}

@Scope
class GraphScope

interface HelloStateSpec {
    val sample: LiveData<Int>
}
interface WorldStateSpec {
    val sample: LiveData<Int>
}

@StateStore(HelloStateSpec::class)
class HelloStateStore

@StateStore(WorldStateSpec::class)
class WorldStateStore*/

//@AndroidEntryPoint
class MainTabActivityActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.main_tab_activity)

        val sectionsPagerAdapter = SectionsPagerAdapter(this, supportFragmentManager)
        val viewPager: ViewPager = findViewById(R.id.view_pager)
        viewPager.adapter = sectionsPagerAdapter
        val tabs: TabLayout = findViewById(R.id.tabs)
        tabs.setupWithViewPager(viewPager)

       // val f = HelloStateStore()
       // print(f.toString())
        //val f = HELLO()
        //print(f.foo())

    }




    override fun dispatchTouchEvent(ev: MotionEvent?): Boolean {
        if (currentFocus != null) {
            val imm: InputMethodManager =
                getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager
            imm.hideSoftInputFromWindow(currentFocus!!.windowToken, 0)
        }
        return super.dispatchTouchEvent(ev)
    }
}
